
/* ==== FUN_0043b76c @ 0043b76c ==== 
 * signature: undefined __register FUN_0043b76c(int * param_1, int param_2)
 * body: 0043b76c-0043b7e4
 */

void FUN_0043b76c(int *param_1,int param_2)

{
  IStream *pIVar1;
  IStream *pstm;
  HIMAGELIST p_Var2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x43b783;
  pIVar1 = (IStream *)FUN_00415fb8((int *)&PTR_TStreamAdapter_vmt_000_0040f384,'\x01',param_2,0);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pstm = pIVar1;
  if (pIVar1 != (IStream *)0x0) {
    pstm = pIVar1 + 5;
  }
  p_Var2 = ImageList_Read(pstm);
  FUN_0043a57c(param_1,p_Var2);
  iVar3 = FUN_0043a5b8(param_1);
  if (iVar3 == 0) {
    piVar4 = FUN_0040b694((int *)&DAT_0040e6dc,'\x01',(undefined4 *)PTR_PTR_004ab900);
    FUN_004036f4(piVar4);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_14 = (code *)0x43b7e4;
  FUN_00402f9c((int *)pIVar1);
  return;
}


