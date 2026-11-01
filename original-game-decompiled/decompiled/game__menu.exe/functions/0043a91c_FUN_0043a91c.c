
/* ==== FUN_0043a91c @ 0043a91c ==== 
 * signature: int __register FUN_0043a91c(int * param_1)
 * body: 0043a91c-0043a93c
 */

int FUN_0043a91c(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  int iVar2;
  
  bVar1 = FUN_0043a3e4((int)param_1);
  if (bVar1) {
    himl = (HIMAGELIST)FUN_0043a5b8(param_1);
    iVar2 = ImageList_GetImageCount(himl);
    return iVar2;
  }
  return 0;
}


