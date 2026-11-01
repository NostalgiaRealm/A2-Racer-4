
/* ==== FUN_00431198 @ 00431198 ==== 
 * signature: undefined __register FUN_00431198(int * param_1, int param_2)
 * body: 00431198-00431208
 */

void FUN_00431198(int *param_1,int param_2)

{
  IStream *pIVar1;
  IStream *pstm;
  HIMAGELIST himl;
  BOOL BVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x4311af;
  pIVar1 = (IStream *)FUN_00414404((int *)&PTR_TStreamAdapter_vmt_000_0040e148,'\x01',param_2,0);
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pstm = pIVar1;
  if (pIVar1 != (IStream *)0x0) {
    pstm = pIVar1 + 5;
  }
  himl = (HIMAGELIST)FUN_00430264(param_1);
  BVar2 = ImageList_Write(himl,pstm);
  if (BVar2 == 0) {
    piVar3 = FUN_0040a9f4((int *)&DAT_0040d674,'\x01',(undefined4 *)PTR_PTR_00446ba4);
    FUN_0040346c(piVar3);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_14 = (code *)0x431208;
  FUN_00402d14((int *)pIVar1);
  return;
}


