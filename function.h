void start()
{

    printf("Hi mate welcome in offline bet system  ! \n");
}

int login_panel ()
{   FILE *fp;
 char filename[]= "username_and_password";
 char username[101];
 char password[101]; 
 printf ("Put a username : ");
  gets(username);
  printf ("Put a password : ");
  gets(password);
   fp = fopen(filename,"w+");

   if ( fp )
   {   fputs("Username : ", fp ); 
	   fputs(username,fp);
        fputs ("\n" , fp); 
        fputs("Password : " , fp);
       fputs(password,fp) ;
    }
   else
      {
         printf("Failed to open the file\n");
        }
   fclose(fp);
}