#include <SFML/Graphics.h> //librairie sfml pour le csfml

int main()
{
    sfRenderWindow *window; //on fait une fenetre
    sfVideoMode video_mode = {800, 600, 64}; // on programme sa dimension a,b et le nombre de bits d affichage ,d ici 64
    sfEvent event; // on instaure un event, fonction de la fenetre pour la fermer

    window = sfRenderWindow_create(video_mode, "My first Window", sfClose, NULL); // fenetre = creation de fenetre avec le mode 
                                                                                  //video pour le contenue, titre de la fenetre, option de close = on peut fermer la fenetre
    while (sfRenderWindow_isOpen(window)) { //tant que la fenetre est ouverte
        sfRenderWindow_display(window); //afficher la fenetre
        while (sfRenderWindow_pollEvent(window, &event)) { //tant qu ily a des evenements on les regarde
                    if (event.type == sfEvtClosed)// si l evenement est de fermer la fenetre
                        sfRenderWindow_close(window);  //on ferme la fenetre
        }
    }
}
