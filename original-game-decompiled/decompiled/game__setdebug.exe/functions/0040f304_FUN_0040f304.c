
/* ==== FUN_0040f304 @ 0040f304 ==== 
 * signature: undefined __register FUN_0040f304(int param_1, int param_2)
 * body: 0040f304-0040f37f
 */

void FUN_0040f304(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  
  pcStack_10 = (code *)0x40f316;
  FUN_0040f38c(param_1);
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  if (*(char *)(param_1 + 0x20) != '\x01') {
    pcStack_10 = (code *)&stack0xfffffffc;
    iVar1 = FUN_0040f080(*(int *)(param_1 + 4),param_2);
    if (iVar1 != -1) {
      if (*(char *)(param_1 + 0x20) == '\x02') {
        FUN_0040efb0(**(undefined4 **)(param_1 + 4),(undefined4 *)PTR_FUN_00446bc0,param_2);
      }
      goto LAB_0040f36a;
    }
  }
  FUN_0040eec8(*(int **)(param_1 + 4),param_2);
LAB_0040f36a:
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0040f387;
  pcStack_14 = (code *)0x40f37f;
  FUN_0040f3f0(param_1);
  return;
}


