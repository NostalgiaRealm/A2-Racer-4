
/* ==== FUN_0041ceec @ 0041ceec ==== 
 * signature: undefined __register FUN_0041ceec(int param_1, int param_2, uint param_3)
 * body: 0041ceec-0041cf8c
 */

void FUN_0041ceec(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 *local_c;
  
  pcStack_1c = (code *)0x41cf04;
  FUN_0041ced4(param_1);
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  for (local_c = *(undefined4 **)(param_1 + 4);
      (local_c != (undefined4 *)0x0 && ((param_2 != local_c[2] || (param_3 != local_c[3]))));
      local_c = (undefined4 *)*local_c) {
  }
  if (local_c == (undefined4 *)0x0) {
    pcStack_1c = (code *)&stack0xfffffffc;
    puVar1 = (undefined4 *)FUN_004026b8(0x10);
    *puVar1 = *(undefined4 *)(param_1 + 4);
    piVar2 = FUN_0041cfa0(param_1,param_2,param_3);
    puVar1[1] = piVar2;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0041cf94;
  pcStack_20 = (code *)0x41cf8c;
  FUN_0041cee0(param_1);
  return;
}


