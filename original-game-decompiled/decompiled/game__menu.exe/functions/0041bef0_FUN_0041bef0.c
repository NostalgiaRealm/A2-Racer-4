
/* ==== FUN_0041bef0 @ 0041bef0 ==== 
 * signature: undefined __register FUN_0041bef0(int param_1, int * param_2)
 * body: 0041bef0-0041bf54
 */

void FUN_0041bef0(int param_1,int *param_2)

{
  int iVar1;
  UINT cchBuffer;
  LPSTR lpDescription;
  char *pcVar2;
  uint uVar3;
  
  FUN_00403c5c(param_2);
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    cchBuffer = GetEnhMetaFileDescriptionA(*(HENHMETAFILE *)(iVar1 + 8),0,(LPSTR)0x0);
    if (0 < (int)cchBuffer) {
      FUN_00404210(param_2,cchBuffer);
      lpDescription = FUN_004040a0((undefined *)*param_2);
      GetEnhMetaFileDescriptionA
                (*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),cchBuffer,lpDescription);
      pcVar2 = FUN_004040a0((undefined *)*param_2);
      uVar3 = FUN_00408b24(pcVar2);
      FUN_00404210(param_2,uVar3);
    }
  }
  return;
}


