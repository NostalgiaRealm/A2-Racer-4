
/* ==== FUN_0043108c @ 0043108c ==== 
 * signature: undefined __register FUN_0043108c(int * param_1, int param_2)
 * body: 0043108c-00431104
 */

void FUN_0043108c(int *param_1,int param_2)

{
  IStream *pIVar1;
  IStream *pstm;
  HIMAGELIST p_Var2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x4310a3;
  pIVar1 = (IStream *)FUN_00414404((int *)&PTR_TStreamAdapter_vmt_000_0040e148,'\x01',param_2,0);
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pstm = pIVar1;
  if (pIVar1 != (IStream *)0x0) {
    pstm = pIVar1 + 5;
  }
  p_Var2 = ImageList_Read(pstm);
  FUN_00430238(param_1,p_Var2);
  iVar3 = FUN_00430264(param_1);
  if (iVar3 == 0) {
    piVar4 = FUN_0040a9f4((int *)&DAT_0040d61c,'\x01',(undefined4 *)PTR_PTR_00446cb8);
    FUN_0040346c(piVar4);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_14 = (code *)0x431104;
  FUN_00402d14((int *)pIVar1);
  return;
}


