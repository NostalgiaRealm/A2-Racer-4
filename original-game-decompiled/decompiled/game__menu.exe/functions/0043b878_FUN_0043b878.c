
/* ==== FUN_0043b878 @ 0043b878 ==== 
 * signature: undefined __register FUN_0043b878(int * param_1, int param_2)
 * body: 0043b878-0043b8e8
 */

void FUN_0043b878(int *param_1,int param_2)

{
  IStream *pIVar1;
  IStream *pstm;
  HIMAGELIST himl;
  BOOL BVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x43b88f;
  pIVar1 = (IStream *)FUN_00415fb8((int *)&PTR_TStreamAdapter_vmt_000_0040f384,'\x01',param_2,0);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pstm = pIVar1;
  if (pIVar1 != (IStream *)0x0) {
    pstm = pIVar1 + 5;
  }
  himl = (HIMAGELIST)FUN_0043a5b8(param_1);
  BVar2 = ImageList_Write(himl,pstm);
  if (BVar2 == 0) {
    piVar3 = FUN_0040b694((int *)&DAT_0040e734,'\x01',(undefined4 *)PTR_PTR_004ab790);
    FUN_004036f4(piVar3);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_14 = (code *)0x43b8e8;
  FUN_00402f9c((int *)pIVar1);
  return;
}


