#include<stdio.h>
#include<string.h>
struct cricket
{
    char p_name[100];
    char t_name[100];
    float b_avg;
}arr[5];

void read(struct cricket arr[5])
{
    for(int i=0;i<5;i++)
    {
        printf("Enter PName TName BAvg for player %d:\n",i+1);
        scanf("%10s\n%10s\n%f",arr[i].p_name,arr[i].t_name,&arr[i].b_avg);
    }
}

void sort(struct cricket arr[5])
{
    for(int i=0;i<5;i++)
    {
        struct cricket temp;
		for(int j=i;j<4;j++)
		{
			if(strcmp(arr[i].t_name,arr[j+1].t_name)>0)
			{
				temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
		}
    }   
}

void display(struct cricket arr[5])
{
    for(int i=0;i<5;i++)
        printf("%10s\t%10s\t%.2f\n",arr[i].p_name,arr[i].t_name,arr[i].b_avg);
    
}

int main()
{
    read(arr);
    sort(arr);
    display(arr);
}
