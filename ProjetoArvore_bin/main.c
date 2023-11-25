// main.c
#include <stdio.h>
#include "arvore_binaria.h"

int main() {
    TreeNode* root = NULL;

    // Testando a inserção
    printf("Inserindo valores 50, 30, 20, 40, 70, 60, 80 na arvore.\n");
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Testando o percurso em ordem
    printf("\nPercorrendo a arvore em ordem:\n");
    inorder(root);

    // Testando a remoção
    printf("\nRemovendo o valor 20:\n");
    root = deleteNode(root, 20);
    printf("Percorrendo a arvore em ordem apos a remocao:\n");
    inorder(root);

    printf("\nRemovendo o valor 30:\n");
    root = deleteNode(root, 30);
    printf("Percorrendo a arvore em ordem apos a remocao:\n");
    inorder(root);

    printf("\nRemovendo o valor 50:\n");
    root = deleteNode(root, 50);
    printf("Percorrendo a arvore em ordem apos a remocao:\n");
    inorder(root);

    // Testando a busca
    TreeNode* res =  search(root, 40);
    if (res == NULL)
        printf("\nElemento 40 nao encontrado");
    else
        printf("\nElemento 40 encontrado");

    // Testando o percurso em pré-ordem
    printf("\nPercorrendo a arvore em pre-ordem:\n");
    preorder(root);

    // Testando o percurso em pós-ordem
    printf("\nPercorrendo a arvore em pos-ordem:\n");
    postorder(root);

    // Testando mínimo e máximo
    printf("\nValor minimo na arvore: %d", minValue(root));
    printf("\nValor maximo na arvore: %d", maxValue(root));

    return 0;
}
