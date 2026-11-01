
/* ==== FUN_00430558 @ 00430558 ==== 
 * signature: int __register FUN_00430558(int * param_1)
 * body: 00430558-0043057e
 */

int FUN_00430558(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  COLORREF CVar2;
  int iVar3;
  
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    himl = (HIMAGELIST)FUN_00430264(param_1);
    CVar2 = ImageList_GetBkColor(himl);
    iVar3 = FUN_0042ff98(CVar2);
    return iVar3;
  }
  return param_1[0xe];
}


