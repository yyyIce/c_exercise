#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//u_char��8λ 
typedef struct _ethernet_h
{
}ethernet_h;

typedef  struct _ip_h
{
}ip_h;

typedef  struct _arp_h
{
}arp_h;

typedef struct _tcp_h
{
}tcp_h;

typedef struct _udp_h
{
}udp_h;

typedef struct _icmp_h
{
}icmp_h;


//���ݰ��ķ����ṹ
typedef struct _p_data_analysis
{
    char p_type[8];                   //������
    int time[6];                      //ʱ���
    int len;                          //����

    struct _ethernet_h *eth_hdr;      //��̫��֡ͷ
    struct _arp_h *arp_hdr;           //arp��ͷ
    struct _ip_h *ip_hdr;             //ip��ͷ
    struct _icmp_h *icmp_hdr;         //icmp��ͷ
    struct _udp_h *udp_hdr;           //udp��ͷ
    struct _tcp_h *tcp_hdr;           //tcp��ͷ

}p_data_analysis;

int main()
{
    printf("p_data_analysis�� %d\n",sizeof(p_data_analysis));

	
	p_data_analysis * data = (p_data_analysis *)malloc(sizeof(p_data_analysis));
	//��
	//struct _p_data_analysis * data = (struct _p_data_analysis *)malloc(sizeof(struct _p_data_analysis));
	printf("data->eth_hdr addr: %p\n",data->eth_hdr);

	memset(data, 0, sizeof(p_data_analysis));
	//��
	//memset(data, 0, sizeof(struct _p_data_analysis));
	data->len = 1460;	
	printf("data addr: %p\n",data);
    printf("data->len: %d\n",data->len);
    printf("data->eth_hdr: %d\n",data->eth_hdr);
    printf("data->eth_hdr addr�� %p\n",data->eth_hdr);
    data->eth_hdr = (struct _ethernet_h *)malloc(sizeof(struct _ethernet_h));
    printf("data->eth_hdr addr: %p\n",data->eth_hdr);
    
    
    /*
	//���Բ������ڴ�ռ�ᷢ��ʲô�� 
	p_data_analysis * data;
	//memset(data, 0, sizeof(p_data_analysis));
	data->len = 1460;
	printf("%p\n",data);
	printf("%d\n",data->len);
	*/
	 
	return 0;
}
