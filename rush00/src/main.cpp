#include "Player.hpp"
#include "Bug.hpp"
#include "Bullet.hpp"
#include <ctime>
#include <unistd.h>

int keyHandle(Player *pl, Bullet **bullets)
{
    int key;

    key = getch();
    switch(key) {
        case 65:
            pl->move(1);//key up
            break;
        case 66:
             pl->move(4);  // key down
            break;
        case 68:
            pl->move(3);  // key left
            break;
        case 67:
            pl->move(2);  // key right
            break;
        case 32:
            pl->shoot(bullets);  // key space
            break;
        // case 27:
        //     return (0);  // esq
        default : ;
    }
    return (1);
}

void    genEnemy(Bug **bugs)
{
    int count;
    int i;

    i = -1;
    count = rand() % 4;
    if (count < 3)
        return ;
    count = 0;
    while (++i < 50 && count < 2)
    {
        if (!bugs[i])
        {
            if (count == 0 && rand() % 2)
                bugs[i] = new Bug(rand() % (MAXFIELD_X / 2) , 0);
            else if (count == 1 && rand() % 2)
            {
                bugs[i] = new Bug(MAXFIELD_X / 2 + rand() % (MAXFIELD_X / 2), 0);
                break ;
            }
            count++;
        }
    }
}

int isPlayerCol(Player *pl, int x, int y)
{
    return(x >= pl->getX() && x < pl->getX() + 4 && y >= pl->getY() && y < pl->getY() + 2);
}

int checkCollision(Player *pl, Bug **bugs, Bullet **bullets)
{
    int i;
    int j;
    int coll;

    i = -1;
    j = -1;
    coll = 0;
    while (++i < BUG_ARRAY)
    {
        coll = 0;
        if (bugs[i]){
            j = -1;
            while (++j < BULL_ARRAY)
            {
                if (bullets[j] && bugs[i]->getY() == bullets[j]->getY() && bugs[i]->getX() == bullets[j]->getX()){
                    coll = 1;
                    delete bullets[j];
                    bullets[j] = 0;
                    break;
                }
            }
            if (coll)
            {
                delete bugs[i];
                bugs[i] = 0;
            }
            else if (bugs[i]->getY() == MAXFIELD_Y || isPlayerCol(pl, bugs[i]->getX(), bugs[i]->getY()))
            {
                delete bugs[i];
                bugs[i] = 0;
                pl->takeDamage(10);
                if (pl->getHP() <= 0)
                    return (1);
            }
        }
    }
    return (0);
}

void moveEnemy(Bug **bugs)
{
    int i;

    i = -1;
    while (++i < BUG_ARRAY)
    {
        if (bugs[i])
            bugs[i]->move(4 + rand() % 3); 
    }
}
void moveBullets(Bullet **bullets)
{
    int i;

    i = -1;
    while (++i < BULL_ARRAY)
    {
        if (bullets[i])
        {
            if (bullets[i]->getY() == 0)
            {
                delete bullets[i];
                bullets[i] = 0;
            }
            else
                bullets[i]->move(0);
        }
    }
}

void init(Bug **bugs, Bullet **bullets)
{
     int i;

    i = -1;
    while (++i < BUG_ARRAY)
        bugs[i] = 0;
    i = -1;
    while (++i < BULL_ARRAY)
        bullets[i] = 0;
}

void redraw(Player *p, Bug **bugs, Bullet **bullets)
{
    int i;

    i = -1;
    start_color();
    init_pair(1, COLOR_YELLOW, COLOR_GREEN);
    mvprintw(p->getY(), p->getX(), " || ");
    mvprintw(p->getY() + 1, p->getX(), "o--o");
    while(++i < BUG_ARRAY)
    {
        if (bugs[i])
            mvprintw(bugs[i]->getY(), bugs[i]->getX(), "*");
    }
    i = -1;
    while(++i < BULL_ARRAY)
    {
        if (bullets[i])
            mvprintw(bullets[i]->getY(), bullets[i]->getX(), ".");
    }
}

void freeGame(Bug **bugs, Bullet **bullets)
{
    int i;

    i = -1;
    while(++i < BUG_ARRAY)
    {
        if (bugs[i])
        {
            delete bugs[i];
            bugs[i] = 0;
        }
    }
    i = -1;
    while(++i < BULL_ARRAY)
    {
        if (bullets[i])
        {
            delete bullets[i];
            bullets[i] = 0;
        }
    }
}

void start()
{
    Bug     *bugs[BUG_ARRAY];
    Bullet  *bullets[BULL_ARRAY];
    Player  pl;
    int    gameSpeed;
    long int     timeMS;

    init(bugs, bullets);
    gameSpeed = 100;
    timeMS = 0;
    while (true)
    {
        timeMS++;
        if (!keyHandle(&pl, bullets))
            break ;
        clear();
        if ((timeMS % 10) == 0)
        {
            moveBullets(bullets);
            checkCollision(&pl, bugs, bullets);
        }
        if ((timeMS % gameSpeed) == 0)
        {
            moveEnemy(bugs);
            if (checkCollision(&pl, bugs, bullets))
            {
                /*player died*/
                //break ; 
            }
            genEnemy(bugs);
        }
        if (gameSpeed > 20 && (timeMS % 800) == 0)
        {
            gameSpeed -= 5;
            timeMS = 0;
        }
        redraw(&pl, bugs, bullets);
        refresh();
        usleep(3000);
    }
    freeGame(bugs, bullets);
}

int main()
{
    initscr();
    noecho();
    curs_set(FALSE);
    nodelay(stdscr, TRUE);
    start();
    endwin();
    return (0);
}