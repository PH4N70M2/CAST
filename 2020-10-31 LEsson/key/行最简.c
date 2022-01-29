#include<stdio.h>
int main(){
	int k,k1,m,n,i,j,i2,j2,i3,j3,v;
	float a[10][10],b[10][10],s1,s2;
	FILE *fpRead=fopen("D:\\input.txt","r");
    FILE *fpWrite=fopen("D:\\output.txt","w");
	if(fpRead== NULL){  
        return 0;  
    } 
	fscanf(fpRead,"%d",&k);
	for(k1=1;k1<=k;k1++){
		fscanf(fpRead,"%d %d",&m,&n);
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++)
			fscanf(fpRead,"%f",&a[i][j]);
		}
		v=0;
		for(j=1;j<=n;j++){
			for(i=j-v;i<=m;i++){
				if(i==m&&a[i][j]== 0){
					v++;
					break;
				}
				else if(a[i][j]==0)continue;
				else{
					for(j2=1;j2<=n;j2++){
						b[i][j2]=a[i][j2];
					    a[i][j2]=a[j-v][j2];
					    a[j-v][j2]=b[i][j2];
					}
					s1=a[j-v][j];
					for(i2=j-v+1;i2<=m;i2++){
						s2=a[i2][j];
						for(j2=1;j2<=n;j2++){
							if(s2==0)break;
							else{
								a[i2][j2]*=s1;
								a[j-v][j2]*=s2;
								a[i2][j2]-=a[j-v][j2];
								a[j-v][j2]/=s2;
							}
						}
					}
					break;
				}
			}
		}
		for(i=m;i>=1;i--){
			for(j=1;j<=n;j++){
				if(a[i][j]== 0)continue;
				else{
					s1=a[i][j];
					for(j2=j;j2<=n;j2++)a[i][j2]/=s1;
					for(i2=i-1;i2>=1;i2--){
						if(a[i2][j]!=0){
							s1=a[i2][j];
							v=-1;
						}
						if(v!=-1)s1=0;
						for(j2=j;j2<=n;j2++)a[i2][j2]=a[i2][j2]-a[i][j2]*s1;
					}
				    break;
				}
			}
		} 
		if(fpWrite== NULL){  
        return 0;  
        } 
		if(k1== 1)fprintf(fpWrite,"%d\n",k);
		fprintf(fpWrite,"%d %d\n",m,n);
		for(i3=1;i3<=m;i3++){
	        for(j3=1;j3<=n;j3++){
	        	if(a[i3][j3]==-0)a[i3][j3]=0;
	            fprintf(fpWrite,"%.3f ",a[i3][j3]);
	        }
	        fprintf(fpWrite,"\n"); 
	    }
	}
	return 0;
}

