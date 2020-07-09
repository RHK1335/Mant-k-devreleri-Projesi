#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void zaman (char a[])
{
    time_t zaman = time (0);
    char zamann[20];

    char *p;
    p=localtime(&zaman);
    strftime (zamann, sizeof(zamann), "%Y-%m-%d %H:%M:%S",p);
     FILE *zamandos;
     zamandos=fopen("D:\\log.txt","a");


    if(strchr(a,'Y')!=NULL)
    {
        fprintf(zamandos,"%s\t",zamann);
        fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"devre.txt yuklendi");
        fprintf(zamandos,"\n");
        printf("devre.txt yuklendi");
    }
    if(strchr(a,'I')!=NULL)
    {
       fprintf(zamandos,"%s\t",zamann);
       fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"degerler atandi");
        fprintf(zamandos,"\n");
        printf("degerler atandi");
    }
    if(strstr(a,"ha")!=NULL)
    { fprintf(zamandos,"%s\t",zamann);
        fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"A>1");
        fprintf(zamandos,"\n");
        printf("A=1 olarak atandi");

    }
    if(strstr(a,"hb")!=NULL)
    {
        fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"B>1");
        fprintf(zamandos,"\n");
        printf("B=1 olarak atandi");

    }
    if(strstr(a,"hc")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"C>1");
        fprintf(zamandos,"\n");
        printf("C=1 olarak atandi");
    }
    if(strstr(a,"hd")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"D>1");
        fprintf(zamandos,"\n");
        printf("D=1 olarak atandi");
    }
    if(strstr(a,"he")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"E>1");
        fprintf(zamandos,"\n");
        printf("E=1 olarak atandi");
    }
    if(strstr(a,"hf")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"F>1");
        fprintf(zamandos,"\n");
        printf("F=1 olarak atandi");
    }
    if(strstr(a,"hk")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"K>1");
        fprintf(zamandos,"\n");
        printf("K=1 olarak atandi");
    }
    if(strstr(a,"hl")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"L>1");
        fprintf(zamandos,"\n");
        printf("L=1 olarak atandi");
    }
    if(strstr(a,"hm")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"M>1");
        fprintf(zamandos,"\n");
        printf("M=1 olarak atandi");
    }
    if(strstr(a,"la")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"A>0");
        fprintf(zamandos,"\n");
        printf("A=0 olarak atandi");
    }
    if(strstr(a,"lb")!=NULL)
    {
        fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"B>0");
        fprintf(zamandos,"\n");
        printf("B=0 olarak atandi");

    }
    if(strstr(a,"lc")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"C>0");
        fprintf(zamandos,"\n");
        printf("C=0 olarak atandi");
    }
    if(strstr(a,"ld")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"D>0");
        fprintf(zamandos,"\n");
        printf("D=0 olarak atandi");
    }
    if(strstr(a,"le")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"E>0");
        fprintf(zamandos,"\n");
        printf("E=0 olarak atandi");
    }
    if(strstr(a,"lf")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"F>0");
        fprintf(zamandos,"\n");
        printf("F=0 olarak atandi");
    }
    if(strstr(a,"lk")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"K>0");
        fprintf(zamandos,"\n");
        printf("K=0 olarak atandi");
    }
    if(strstr(a,"ll")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"L>0");
        fprintf(zamandos,"\n");
        printf("L=0 olarak atandi");
    }
    if(strstr(a,"lm")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"M>0");
        fprintf(zamandos,"\n");
        printf("M=0 olarak atandi");
    }
    if(strstr(a,"Ga")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"A ekrana yazdirildi");
        fprintf(zamandos,"\n");
    }
    if(strstr(a,"Gb")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"B ekrana yazdirildi");
        fprintf(zamandos,"\n");
    }
    if(strstr(a,"Gc")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"C ekrana yazdirildi");
        fprintf(zamandos,"\n");
    }
    if(strstr(a,"Gd")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"D ekrana yazdirildi");
        fprintf(zamandos,"\n");
    }
    if(strstr(a,"Ge")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"E ekrana yazdirildi");
        fprintf(zamandos,"\n");
    }
    if(strstr(a,"Gf")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"F ekrana yazdirildi");
        fprintf(zamandos,"\n");
    }
    if(strstr(a,"Gk")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"K ekrana yazdirildi");
        fprintf(zamandos,"\n");
    }
    if(strstr(a,"Gl")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"L ekrana yazdirildi");
        fprintf(zamandos,"\n");
    }
    if(strstr(a,"Gm")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"M ekrana yazdirildi");
        fprintf(zamandos,"\n");
    }
    if(strstr(a,"G*")!=NULL)
    {
fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"bütün degerler ekrana yazdirildi");
        fprintf(zamandos,"\n");
    }
    if(strstr(a,"C")!=NULL)
    {
     fprintf(zamandos,"%s\t",zamann);
    fprintf(zamandos,"%s\t",a);
        fprintf(zamandos,"program bitti");
        fprintf(zamandos,"\n");
        printf("program bitti");
    }

   }



int main()
{
    FILE *dosya;
    FILE *deger;
    FILE *baska;
    int i=0,j,giris_sayisi,cikis_sayisi,nor_giris=NULL,xor_giris=NULL,not_giris=NULL,or_giris=NULL,and_giris=NULL,nand_giris=NULL;
    char d,l[19],kelime[10],girisler[10][10],cikisler[10][10],kapi_ismi[10][4];
    char nor_girisler[10][2],or_girisler[10][2],and_girisler[10][3],nand_girisler[10][2],not_girisler[10][1],xor_girisler[10][2];
    char nor_cikis[10],or_cikis[10],and_cikis[10],nand_cikis[10],not_cikis[10],xor_cikis[10],komut[10];
    int nor_nano=NULL,xor_nano=NULL,not_nano=NULL,or_nano=NULL,and_nano=NULL,nand_nano=NULL;
    int nor_cikis_deg,or_cikis_deg,and_cikis_deg,nand_cikis_deg,not_cikis_deg,xor_cikis_deg;
    int nor_giris_deg[2],or_giris_deg[2],and_giris_deg[3],nand_giris_deg[2],not_giris_deg[1],xor_giris_deg[2];
    int sayac=0,aldeg,t=0,kapi_Sayac=0,deneme_sayac=34,dos_gir=0,dos_cik=0,k=0,a=NULL,b=NULL,c=NULL,d1=NULL,e=NULL,f=NULL,k1=NULL,l1=NULL,m=NULL;
    and_giris_deg[2]=NULL;



    if(dosya=fopen("D:\\devre.txt","r")==NULL)
        printf("dosya bulunamadi");
    dosya=fopen("D:\\devre.txt","r");


    if(deger=fopen("D:\\deger.txt","r")==NULL)
        printf("dosya bulunamadi");
    deger=fopen("D:\\deger.txt","r");

    if(baska=fopen("D:\\baska_dosya.txt","r")==NULL)
        printf("dosya bulunamadi");
    baska=fopen("D:\\baska_dosya.txt","r");
 while(1)
 {
 printf("komut giriniz =");
 scanf("%s",komut);
 printf("\n");
 if(strstr(komut,"Y")!=NULL)
 {
    while(1)
    {
        fscanf(dosya,"%s",&kelime);


        if(strstr(kelime,".include")!=NULL)
        {

            goto  baskados;
        }
        else if(strstr(kelime,".giris")!=NULL)
        {

            for(j=dos_gir-1; j<10; j++)
            {
                fscanf(dosya,"%s",&girisler[j]);
                if(strchr(girisler[j],'#')!=NULL)
                    break;

            }
            giris_sayisi=j;

        }
        else if(strstr(kelime,".cikis")!=NULL)
        {

            for(j=dos_cik; j<10; j++)
            {

                fscanf(dosya,"%s",&cikisler[j]);
                if(strchr(cikisler[j],'#')!=NULL)
                    break;


            }
            cikis_sayisi=j;


        }
        else if (strstr(kelime,".kapi")!=NULL)
        {

            fscanf(dosya,"%s",&kapi_ismi[kapi_Sayac]);




            if(strstr(kapi_ismi[kapi_Sayac],"NOR")!=NULL)
            {
                fscanf(dosya,"%d",&nor_giris);
                fscanf(dosya,"%s",&nor_cikis);

                for(j=0; j<nor_giris; j++)
                {

                    fscanf(dosya,"%s",&nor_girisler[j]);
                    fflush(stdin);


                }
                fscanf(dosya,"%d",&nor_nano);


            }
            else if(strstr(kapi_ismi[kapi_Sayac],"NAND")!=NULL)
            {

                fscanf(dosya,"%d",&nand_giris);
                fscanf(dosya,"%s",&nand_cikis);
                for(j=0; j<nand_giris; j++)
                {
                    fscanf(dosya,"%s",&nand_girisler[j]);
                }
                fscanf(dosya,"%d",&nand_nano);


            }
            else if(strstr(kapi_ismi[kapi_Sayac],"OR")!=NULL)
            {
                fscanf(dosya,"%d",&or_giris);
                fscanf(dosya,"%s",&or_cikis);
                for(j=0; j<or_giris; j++)
                {
                    fscanf(dosya,"%s",&or_girisler[j]);
                }
                fscanf(dosya,"%d",&or_nano);
            }
            else if(strstr(kapi_ismi[kapi_Sayac],"XOR")!=NULL)
            {
                fscanf(dosya,"%d",&xor_giris);
                fscanf(dosya,"%s",&xor_cikis);
                for(j=0; j<xor_giris; j++)
                {
                    fscanf(dosya,"%s",&xor_girisler[j]);
                }
                fscanf(dosya,"%d",&xor_nano);
            }
            else if(strstr(kapi_ismi[kapi_Sayac],"NOT")!=NULL)
            {
                fscanf(dosya,"%d",&not_giris);
                fscanf(dosya,"%s",&not_cikis);
                for(j=0; j<not_giris; j++)
                {
                    fscanf(dosya,"%s",&not_girisler[j]);
                }
                fscanf(dosya,"%d",&not_nano);

            }
            else if(strstr(kapi_ismi[kapi_Sayac],"AND")!=NULL)
            {
                fscanf(dosya,"%d",&and_giris);
                fscanf(dosya,"%s",&and_cikis);
                for(j=0; j<and_giris; j++)
                {
                    fscanf(dosya,"%s",&and_girisler[j]);
                }
                fscanf(dosya,"%d",&and_nano);

            }

            kapi_Sayac++;

        }
        else if (strstr(kelime,".son")!=NULL)
        {

            goto atlaa;

        }
         geri:
        fseek(dosya,i, SEEK_SET);
        while(d!='\n')
        {
            d=getc(dosya);
            i++;



        }
        i++;


        d='a';










    }



while(1)
    {
        baskados:
        fscanf(baska,"%s",&kelime);



        if(strstr(kelime,".giris")!=NULL)
        {

            for(j=0; j<10; j++)
            {
                fscanf(baska,"%s",&girisler[j]);
                if(strchr(girisler[j],'#')!=NULL)
                    break;

            }
            dos_gir=j;



        }
        else if(strstr(kelime,".cikis")!=NULL)
        {

            for(j=0; j<10; j++)
            {

                fscanf(baska,"%s",&cikisler[j]);
                if(strchr(cikisler[j],'#')!=NULL)
                    break;


            }
            dos_cik=j;


        }
        else if (strstr(kelime,".kapi")!=NULL)
        {

            fscanf(baska,"%s",&kapi_ismi[kapi_Sayac]);





            if(strstr(kapi_ismi[kapi_Sayac],"NOR")!=NULL)
            {
                fscanf(baska,"%d",&nor_giris);
                fscanf(baska,"%s",&nor_cikis);

                for(j=0; j<nor_giris; j++)
                {

                    fscanf(baska,"%s",&nor_girisler[j]);
                    fflush(stdin);


                }
                fscanf(baska,"%d",&nor_nano);


            }
            else if(strstr(kapi_ismi[kapi_Sayac],"NAND")!=NULL)
            {

                fscanf(baska,"%d",&nand_giris);
                fscanf(baska,"%s",&nand_cikis);
                for(j=0; j<nand_giris; j++)
                {
                    fscanf(baska,"%s",&nand_girisler[j]);
                }
                fscanf(baska,"%d",&nand_nano);


            }
            else if(strstr(kapi_ismi[kapi_Sayac],"OR")!=NULL)
            {
                fscanf(baska,"%d",&or_giris);
                fscanf(baska,"%s",&or_cikis);
                for(j=0; j<or_giris; j++)
                {
                    fscanf(baska,"%s",&or_girisler[j]);
                }
                fscanf(baska,"%d",&or_nano);
            }
            else if(strstr(kapi_ismi[kapi_Sayac],"XOR")!=NULL)
            {
                fscanf(baska,"%d",&xor_giris);
                fscanf(baska,"%s",&xor_cikis);
                for(j=0; j<xor_giris; j++)
                {
                    fscanf(baska,"%s",&xor_girisler[j]);
                }
                fscanf(baska,"%d",&xor_nano);
            }
            else if(strstr(kapi_ismi[kapi_Sayac],"NOT")!=NULL)
            {
                fscanf(baska,"%d",&not_giris);
                fscanf(baska,"%s",&not_cikis);
                for(j=0; j<not_giris; j++)
                {
                    fscanf(baska,"%s",&not_girisler[j]);
                }
                fscanf(baska,"%d",&not_nano);

            }
            else if(strstr(kapi_ismi[kapi_Sayac],"AND")!=NULL)
            {
                fscanf(baska,"%d",&and_giris);
                fscanf(baska,"%s",&and_cikis);
                for(j=0; j<and_giris; j++)
                {
                    fscanf(baska,"%s",&and_girisler[j]);
                }
                fscanf(baska,"%d",&and_nano);

            }

            kapi_Sayac++;

        }
        else if (strstr(kelime,".son")!=NULL)
        {

            goto geri;

        }

        fseek(baska,k, SEEK_SET);
        while(d!='\n')
        {
            d=getc(baska);
            k++;




        }
        k++;


        d='a';

    }

 }

else if(strstr(komut,"I")!=NULL)
{


///////////////////////////////////////////////////////
///////////////////////////////////////////////////////

    while(1)
    {

        fscanf(deger,"%s",&kelime);
        if((strstr(kelime,nor_cikis)!=NULL))
        {


            if(sayac==1)
            {
                nor_cikis_deg=aldeg;
            }
            else
            {

                fscanf(deger,"%d",&aldeg);

                nor_cikis_deg=aldeg;

                sayac++;

            }

        }
        if((strstr(kelime,nor_girisler[0])!=NULL))
        {

            if(sayac==1)
            {
                nor_giris_deg[0]=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                nor_giris_deg[0]=aldeg;

                sayac++;

            }

        }
        if((strstr(kelime,nor_girisler[1])!=NULL))
        {

            if(sayac==1)
            {
                nor_giris_deg[1]=aldeg;
            }

            else
            {
                fscanf(deger,"%d",&aldeg);
                nor_giris_deg[1]=aldeg;
                sayac++;
            }

        }
       if((strstr(kelime,or_cikis)!=NULL))
        {
            if(sayac==1)
            {
                or_cikis_deg=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                or_cikis_deg=aldeg;
                sayac++;
            }
        }
       if((strstr(kelime,or_girisler[0])!=NULL))
        {
            if(sayac==1)
            {
                or_giris_deg[0]=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                or_giris_deg[0]=aldeg;
                sayac++;
            }
        }
      if((strstr(kelime,or_girisler[1])!=NULL))
        {
            if(sayac==1)
            {
                or_giris_deg[1]=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                or_giris_deg[1]=aldeg;
                sayac++;
            }
        }
        if((strstr(kelime,nand_cikis)!=NULL))
        {
            if(sayac==1)
            {
                nand_cikis_deg=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                nand_cikis_deg=aldeg;
                sayac++;
            }
        }
         if((strstr(kelime,nand_girisler[0])!=NULL))
        {
            if(sayac==1)
            {
                nand_giris_deg[0]=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                nand_giris_deg[0]=aldeg;
                sayac++;
            }
        }
      if((strstr(kelime,nand_girisler[1])!=NULL))
        {
            if(sayac==1)
            {
                nand_giris_deg[1]=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                nand_giris_deg[1]=aldeg;
                sayac++;
            }
        }
        if((strstr(kelime,and_cikis)!=NULL))
        {
            if(sayac==1)
            {
                and_cikis_deg=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                and_cikis_deg=aldeg;
                sayac++;
            }
        }
       if((strstr(kelime,and_girisler[0])!=NULL))
        {
            if(sayac==1)
            {
                and_giris_deg[0]=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                and_giris_deg[0]=aldeg;
                sayac++;
            }
        }
        if((strstr(kelime,and_girisler[1])!=NULL))
        {

            if(sayac==1)
            {
                and_giris_deg[1]=aldeg;

            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                and_giris_deg[1]=aldeg;
                sayac++;
            }

        }
       if((strstr(kelime,and_girisler[2])!=NULL))
        {
            if(sayac==1)
            {
                and_giris_deg[2]=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                and_giris_deg[2]=aldeg;
                sayac++;
            }
        }
       if((strstr(kelime,not_cikis)!=NULL))
        {
            if(sayac==1)
            {
                not_cikis_deg=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                not_cikis_deg=aldeg;
                sayac++;
            }
        }
    if((strstr(kelime,not_girisler[0])!=NULL))
        {
            if(sayac==1)
            {
                not_giris_deg[0]=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                not_giris_deg[0]=aldeg;
                sayac++;
            }
        }

       if((strstr(kelime,xor_cikis)!=NULL))
        {
            if(sayac==1)
            {
                xor_cikis_deg=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                xor_cikis_deg=aldeg;
                sayac++;
            }
        }
       if((strstr(kelime,xor_girisler[0])!=NULL))
        {
            if(sayac==1)
            {
                xor_giris_deg[0]=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                xor_giris_deg[0]=aldeg;
                sayac++;
            }
        }
        if((strstr(kelime,xor_girisler[0])!=NULL))
        {
            if(sayac==1)
            {
                xor_giris_deg[1]=aldeg;
            }
            else
            {
                fscanf(deger,"%d",&aldeg);
                xor_giris_deg[1]=aldeg;
                sayac++;
            }
        }
        if((strchr(kelime,'a')!=NULL))
        {
            a=aldeg;
        }
        if((strchr(kelime,'b')!=NULL))
        {
            b=aldeg;
        }
        if((strchr(kelime,'c')!=NULL))
        {
            c=aldeg;
        }
        if((strchr(kelime,'d')!=NULL))
        {
           d1=aldeg;
        }
        if((strchr(kelime,'e')!=NULL))
        {
            e=aldeg;
        }
        if((strchr(kelime,'f')!=NULL))
        {
            f=aldeg;
        }
        if((strchr(kelime,'k')!=NULL))
        {
            k1=aldeg;
        }
        if((strchr(kelime,'l')!=NULL))
        {
            l1=aldeg;
        }
        if((strchr(kelime,'m')!=NULL))
        {
            m=aldeg;
        }


        sayac=0;
        fseek(deger,t, SEEK_SET);

        while(d!='\n')
        {

            d=getc(deger);
            t++;

 if(d==EOF)
            {
                break;
            }


        }


        if(d==EOF)
    { zaman(komut);
            break;
        }
t++;
        d='a';


    }

}
else if(strstr(komut,"ha")!=NULL)
{
    a=1;
    zaman(komut);
}
else if(strstr(komut,"hb")!=NULL)
{
    b=1;
    zaman(komut);
}
else if(strstr(komut,"hc")!=NULL)
{
   c=1;
   zaman(komut);
}
else if(strstr(komut,"hd")!=NULL)
{
    d1=1;
    zaman(komut);
}
else if(strstr(komut,"he")!=NULL)
{
    e=1;
    zaman(komut);
}
else if(strstr(komut,"hf")!=NULL)
{
   f=1;
   zaman(komut);
}
else if(strstr(komut,"hk")!=NULL)
{
    k1=1;
    zaman(komut);
}
else if(strstr(komut,"hl")!=NULL)
{
    l1=1;
    zaman(komut);
}
else if(strstr(komut,"hm")!=NULL)
{
    m=1;
    zaman(komut);
}
else if(strstr(komut,"la")!=NULL)
{
    a=0;
    zaman(komut);
}
else if(strstr(komut,"lb")!=NULL)
{
    b=0;
    zaman(komut);
}
else if(strstr(komut,"lc")!=NULL)
{
    c=0;
    zaman(komut);
}
else if(strstr(komut,"ld")!=NULL)
{
    d1=0;
    zaman(komut);
}
else if(strstr(komut,"le")!=NULL)
{
    e=0;
    zaman(komut);
}
else if(strstr(komut,"lf")!=NULL)
{
    f=0;
    zaman(komut);
}
else if(strstr(komut,"lk")!=NULL)
{
    k1=0;
    zaman(komut);
}
else if(strstr(komut,"ll")!=NULL)
{
    l1=0;
    zaman(komut);
}
else if(strstr(komut,"lm")!=NULL)
{
    m=0;
    zaman(komut);
}
else if(strstr(komut,"la")!=NULL)
{
    a=0;
    zaman(komut);
}
else if(strstr(komut,"Ga")!=NULL)
{
    printf("A = %d",a);
    zaman(komut);
}
else if(strstr(komut,"Gb")!=NULL)
{
    printf("B = %d",b);
    zaman(komut);
}
else if(strstr(komut,"Gc")!=NULL)
{
    printf("C = %d",c);
    zaman(komut);
}
else if(strstr(komut,"Gd")!=NULL)
{
    printf("D = %d",d1);
    zaman(komut);
}
else if(strstr(komut,"Ge")!=NULL)
{
    printf("E = %d",e);
    zaman(komut);
}
else if(strstr(komut,"Gf")!=NULL)
{
    printf("F = %d",f);
    zaman(komut);
}
else if(strstr(komut,"Gk")!=NULL)
{
    printf("K = %d",k1);
    zaman(komut);
}
else if(strstr(komut,"Gl")!=NULL)
{
    printf("L = %d",l1);
    zaman(komut);
}
else if(strstr(komut,"Gm")!=NULL)
{
    printf("M = %d",m);
    zaman(komut);
}
else if(strstr(komut,"G*")!=NULL)
{
    printf("A = %d \n",a);
    printf("B = %d \n",b);
    printf("C = %d \n",c);
    printf("D = %d \n",d1);
    printf("E = %d \n",e);
    printf("F = %d \n",f);
    printf("K = %d \n",k1);
    printf("L = %d \n",l1);
    printf("M = %d ",m);
    zaman(komut);
}
else if(strstr(komut,"C")!=NULL)
{
    zaman(komut);
    goto bit;
}
if(a==100000000000000000000009){
while(1)
{
    atlaa:
        zaman(komut);
        break;
}
}
printf("\n");

}


bit:

return 0;
}
