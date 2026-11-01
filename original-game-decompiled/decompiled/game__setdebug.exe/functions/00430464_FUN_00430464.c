
/* ==== FUN_00430464 @ 00430464 ==== 
 * signature: int __register FUN_00430464(int * param_1)
 * body: 00430464-00430484
 */

int FUN_00430464(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  int iVar2;
  
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    himl = (HIMAGELIST)FUN_00430264(param_1);
    iVar2 = ImageList_GetImageCount(himl);
    return iVar2;
  }
  return 0;
}


