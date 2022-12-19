#include<stdio.h>
typedef struct node{
 char data;
 node *kiri;
 node *kanan;
};

node *akar=NULL;
addNode(node **akar, char isi) {
 if((*akar)==NULL){
 node *baru;
 baru= new node;
 baru->data = isi;
 baru->kiri = NULL;
 baru->kanan = NULL;
 (*akar)=baru;
 }
}

preOrder(node *akar) {
 if(akar !=NULL) {
 printf("%c ", akar->data);
 preOrder(akar->kiri);
 preOrder(akar->kanan);
 }
}

inOrder(node *akar) {
 if(akar !=NULL) {
 inOrder(akar->kiri);
 printf("%c ", akar->data);
 inOrder(akar->kanan);
 }
}

postOrder(node *akar) {
 if(akar !=NULL) {
 postOrder(akar->kiri);
 postOrder(akar->kanan);
 printf("%c ", akar->data);
 }
}

main(){
char abjad;
printf("\n\n\tPosisi Awal Tree:\n\n");
printf("\t       A\n\t      / \\\n\t     N   D\n\t    /\n\t   R\n\t  / \\\n\t I   I\n\n");
addNode(&akar,abjad='A');
addNode(&akar->kiri,abjad='N');
addNode(&akar->kanan,abjad='D');
addNode(&akar->kiri->kiri,abjad='R');
addNode(&akar->kiri->kiri->kiri,abjad='I');
addNode(&akar->kiri->kiri->kanan,abjad='I');
 printf("Tampilan PreOrder AVL TREE  : ");
 preOrder(akar);
 printf("\nTampilan InOrder AVL TREE  : ");
 inOrder(akar);
 printf("\nTampilan PostOrder AVL TREE : ");
 postOrder(akar);
}