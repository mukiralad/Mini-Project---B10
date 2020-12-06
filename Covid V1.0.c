#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ad
{
    char name[30];
    char blood_group[30];
    char location[80];
    char status[5];
    char phone[10];
    int age,platelletes,sugar,pincode,systolic,diastolic;
    char gender[10];
} x[100];
int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void add();
void view();
void DonorMatch();
void edit();
void del();
void show();
void assess();

int main()
{
    read();
    int c,i,q;
    int m,n;
//making out the pattern
    
    printf("\t\t********************************************************\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t*             COVID-19 PLASMA DONATION                 *\n");
    printf("\t\t*                   FRAMEWORK                          *\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t********************************************************\n");
    printf("\t\t                  \n");

    printf("People who have fully recovered from COVID-19 for at least two weeks are encouraged to consider donating plasma, which may help save the lives of other patients.\n COVID-19 convalescent plasma must only be collected from recovered individuals if they are eligible to donate blood.\n Individuals must have had a prior diagnosis of COVID-19 documented by a laboratory test and meet other donor qualifications.\n Individuals must have complete resolution of symptoms for at least 14 days prior to donation.\n ");
    while(c!=7)
    {

        printf("**Kindly Pick Your Choice**\n\n1. Add Data\n2. View Data\n3. Donor Matching\n4. COVID-19 Self Assessment Test\n5. Edit Data\n6. Delete Data\n7. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            add();
        }
        else if(c==2)//view
        {
            system("cls");
            view();
        }
        else if(c==3)//DonorMatch
        {
            system("cls");
            DonorMatch();
        }
        else if(c==4)//edit
        {
            system("cls");
            assess();
        }
        else if(c==5)//delete
        {
            system("cls");
            edit();
        }

        else if(c==6){
           system("cls");
           del();
        }

        else if(c==7){
            write();
            return 0;
        }

        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}
void add()
{
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
        
        printf("\n");
        fflush(stdin);
        printf("Enter P for patient and D for Donor");
        gets(x[i].status);
        fflush(stdin);
        printf("\n");
        printf("Enter Name = \n");
        gets(x[i].name);
        fflush(stdin);
        printf("Enter your Gender=\n");
        gets(x[i].gender);
        fflush(stdin);
        printf("Enter blood group = \n");
        gets(x[i].blood_group);
        fflush(stdin);
        printf("Enter User Location\n");
        gets(x[i].location);
        fflush(stdin);
        printf("Enter your pincode\n");
        scanf("%d",&x[i].pincode);
        fflush(stdin);
        printf("Enter the age = \n");
        scanf("%d",&x[i].age);
        fflush(stdin);
        while(x[i].age<=0){
        	printf("\n");
        	printf("\t\t\t Enter Valid Age:");
        	scanf("%d",&x[i].age);
        }
        printf("Enter platelletes = \n");
        scanf("%d",&x[i].platelletes);
         while(x[i].platelletes<=0){
            printf("\n");
            printf("\t\t\t Enter Valid platelletes:");
            scanf("%d",&x[i].platelletes);
        }
        fflush(stdin);
        printf("Enter phone number =\n");
        gets(x[i].phone);
         while((strlen(x[i].phone))!=10){
            printf("\n");
            printf("\t\t\t Enter Valid Phone Number:");
            gets(x[i].phone);
        }
        fflush(stdin);
        printf("Enter your Blood Pressure\n");
        printf("Enter Systolic Pressure\n");
        scanf("%d",&x[i].systolic);
        fflush(stdin);
        printf("Enter Diastolic Pressure\n");
        scanf("%d",&x[i].diastolic);
        fflush(stdin);
        printf("Enter your Sugar levels");
        scanf("%d",&x[i].sugar);
        fflush(stdin);

        printf("\n");
        j++;
        a++;
        num++;
    }
}

void view()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x[i].name);
        printf("Gender=");
        puts(x[i].gender);
        printf("blood_group = ");
        puts(x[i].blood_group);
        printf("location =\n");
        puts(x[i].location);
        printf("status=\n");
        puts(x[i].status);
        printf("Phone No=\n");
        puts(x[i].phone);


        printf("pincode=%d\nplatelletes = %d\nAge=%d\nSystolic Pressure=%d\nDiastolic Pressure=%d\nSugar Level=%d\n",x[i].pincode,x[i].platelletes,x[i].age,x[i].systolic,x[i].diastolic,x[i].sugar);
        printf("\n\n");
    }
}
void edit()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.blood_group\n3.Age\n4.platelletes\n5.Phone no.\n");
    printf("Option=");
    scanf("%d",&q);//option
    if(q<=5)
    {
        printf("Enter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(x[p].name);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new blood_group=");
                gets(x[p].blood_group);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new Age=");
                scanf("%d",&x[p].age);
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new platelletes count=");
                scanf("%d",&x[p].platelletes);
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the new Phone no =");
                gets(x[i].phone);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}
void DonorMatch()
{
    int s,f;
    char u[100];
    char y[10];
    printf("\n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t        *******************************        \n");
    printf("\t\t            Welcome to Donor Matching          \n");
    printf("\t\t        *******************************        \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\nKindly confirm few of your credentials\n");
    printf("\n");
        fflush(stdin);
        printf("Please enter your Blood Group = \n");
        printf("\n");
        gets(u);
        printf("Please reaffirm your Status by pressing P =\n");
        printf("\n");
        gets(y);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if((strcmp(u,x[g].blood_group)==0))
            {
                if((strcmp(y,x[g].status))){
                printf("\nYour health is very important to us\n\nKindly be patient while we search the best Donor available for you\n");
                printf("Hurray, that was very quick.Here is your preferrable Donors list\n");
                printf("\n");
                printf("We have notified them about your call,Kindly contact them for further communication\n");
                printf("\n");
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("\n");
                printf("Name = ");
                puts(x[g].name);
                printf("\n");
                printf("Gender=");
                puts(x[g].gender);
                printf("\n");
                printf("blood_group = ");
                puts(x[g].blood_group);
                printf("\n");
                printf("User Location=\n");
                puts(x[g].location);
                printf("\n");
                printf("Status=\n");
                puts(x[g].status);
                printf("\n");
                printf("Phone No=\n");
                puts(x[g].phone);
                printf("\n");

                printf("pincode=%d\n\nplatelletes = %d\n\nAge=%d\n\nSystolic Pressure=%d\n\nDiastolic Pressure=%d\n\nSugar Level=%d\n\n",x[g].pincode,x[g].platelletes,x[g].age,x[g].systolic,x[g].diastolic,x[g].sugar);
                printf("\n\n");

                printf("We are sending healthy vibes in your direction.Hope you have a Swift Recovery\n");
                f=0;
        }
                    else{
                printf("No Donor Found \t");
            }


        }

}
}
void del()
{
    int f,h;
    printf("Enter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove blood_group\n4.Remove age\n5.Remove platelletes\n6.Remove phone number\nOption = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].blood_group,x[f+1].blood_group);
                x[f].age=x[f+1].age;
                x[f].platelletes=x[f+1].platelletes;
                strcpy(x[f].phone,x[f+1].phone);
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].blood_group,"Cleared");
        }
        else if(h==4)
        {
            x[f].age=0;
        }
        else if(h==5)
        {
            x[f].platelletes=0;
        }
        else if(h==6)
        {
             strcpy(x[f].phone,"Cleared");
        }

    }
    else
        printf("\n\nInvalid Serial number\n");

}
void read()
{
    FILE *fp = fopen("patient.txt","r");
    if(fp == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        fp = fopen("patient.txt","w");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        return 0;
    }

    num = fread(x, sizeof(struct ad),100, fp);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("patient.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
}
void assess(){
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t     ***************************************** \n");
    printf("\t\t      WELCOME TO COVID-19 SELF ASSESSMENT TEST \n");
    printf("\t\t     ***************************************** \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
    printf("\t\t                     ****                      \n");
   
    printf("\n\n\n      NOTE:\n-->THESE RESULTS ARE JUST INFORMATIVE IN NATURE<--    \n\n");
   
    char p[13][50]={"Difficulty in breathing","Chest Pain","Loss of Speech","Fever","Dry Cough","Tiredness","Aches","Sore Throat","Diarrhoea","Conjuctivitis","Headache","Loss of taste or smell","Rash on skin"};
    printf("Are you experiencing any of the following symptoms?\n");
     printf("Enter '1' for YES and '0' for NO\n");
    int i=0,j=0,x,l,k=0,r;
    char s[13][50];
    for(i=0;i<13;i++){
        l=strlen(p[i]);
        //printf("Enter 1 for yes and 0 for no\n");
        printf("Are you experiencing %s symptom?\n",p[i]);
        scanf("%d",&x);

        if(x==1){
            strncpy(s[k],p[i],strlen(p[i]));
            k++;
        }
   
   }


    for(i=0;i<k;i++){
        l=strlen(p[i]);
        printf("%s\n",s[i]);
    }

         if(k+1>=7){
            printf("\nHigh Risk of Infection\n");
            printf("\nGo for an RT-PCR Test ASAP\n");
         }

         else if(4<=(k+1)<7){
            printf("Medium Risk of Infection\n");
            printf("\n Stay indoors and isolate yourself\n");
         }

         else{
            printf("Based on the symptoms you shared with us, it's unlikely you have a COVID 19 infection.\n\nHowever, you must maintain social distancing and regularly wash your hands and sanitize them. #Stayhome. #Staysafe");
         }

        //printf("%s\n",s[i]);
   
   }
