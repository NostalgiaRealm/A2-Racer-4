
/* ==== FUN_0046f92c @ 0046f92c ==== 
 * signature: undefined __register FUN_0046f92c(int param_1)
 * body: 0046f92c-0046f9c0;0046f9d8-0046f9ed
 */

void FUN_0046f92c(int param_1)

{
  HGLOBAL pvVar1;
  LPSTREAM *ppstm;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_30;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  FUN_0046fbf4(param_1);
  uStack_30 = 0x46f95c;
  pvVar1 = GlobalAlloc(2,0);
  *(HGLOBAL *)(local_8 + 0x1fc) = pvVar1;
  if (pvVar1 == (HGLOBAL)0x0) {
    FUN_0040b5cc();
  }
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  ppstm = (LPSTREAM *)FUN_00405860(&local_c);
  uVar2 = CreateStreamOnHGlobal(*(HGLOBAL *)(local_8 + 0x1fc),0,ppstm);
  FUN_0046c2c0(uVar2);
  piVar3 = *(int **)(local_8 + 0x204);
  uVar2 = (**(code **)(*piVar3 + 0x18))();
  FUN_0046c2c0(uVar2);
  *in_FS_OFFSET = piVar3;
  *in_FS_OFFSET = uStack_30;
  FUN_00405860(&local_c);
  return;
}


