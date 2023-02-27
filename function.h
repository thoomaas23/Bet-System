
bool start()
{
   char answear[5];
   printf("Hi mate welcome in offline bet system  ! \n");
   printf("You are new here ? \n");
   gets(answear);
   if (strcmp(answear, "Yes") == 0)
      return 1;
   else
      return 0;
}

void login_panel()
{
   FILE *fp;
   char filename[] = "username_and_password";
   char username[101];
   char password[101];
   printf("Put a username : ");
   gets(username);
   printf("Put a password : ");
   gets(password);
   fp = fopen(filename, "w+");
   if (fp)
   {
      fputs("Username : ", fp);
      fputs(username, fp);
      fputs("\n", fp);
      fputs("Password : ", fp);
      fputs(password, fp);
   }
   fclose(fp);
}