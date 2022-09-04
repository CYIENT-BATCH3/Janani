#include<stdio.h>
//function with argument declaration
void music(int option);
void music_play();
void music_pause();
void music_stop();
void music_currentplay();
void music_list();

int main() 
{
    int v_option; //declaring actual arguments
    printf("select the action:\n1.play\n2.pause\n3.stop\n4current playing song\n5.list of songs\n");
    printf("entre the function:");
    scanf("%d",&v_option);
    
    //calling function
    music(v_option);

    return 0;
}

//function definition
void music(int option)
{ 
  //choosing different functions using switch  
    switch(option)
    {
      case 1:music_play();break; 
      case 2:music_pause();break;
      case 3:music_stop();break;
      case 4:music_currentplay();break;
      case 5:music_list();break;
      
    }
}
//function definition
void music_play()
{

    printf("palying the song");
}
//function definition
void music_pause()
{
    
    printf("song paused");
}
//function definition
void music_stop()
{
    
    printf("song stopped");
}
//function definition
void music_currentplay()
{
  
  printf("playing SPB hits");  
}
//function definition
void music_list()
{
    
    printf("SPB hits\nAnirudh hits\nHindi songs\nmelodies\nlatest songs\nYuvan hits");
}
