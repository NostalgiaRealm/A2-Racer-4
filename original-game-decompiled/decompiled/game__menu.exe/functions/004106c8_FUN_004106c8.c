
/* ==== FUN_004106c8 @ 004106c8 ==== 
 * signature: undefined __register FUN_004106c8(int param_1, int param_2)
 * body: 004106c8-00410743
 */

void FUN_004106c8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  
  pcStack_10 = (code *)0x4106da;
  FUN_00410750(param_1);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  if (*(char *)(param_1 + 0x20) != '\x01') {
    pcStack_10 = (code *)&stack0xfffffffc;
    iVar1 = FUN_0041030c(*(int *)(param_1 + 4),param_2);
    if (iVar1 != -1) {
      if (*(char *)(param_1 + 0x20) == '\x02') {
        FUN_004101ec(**(undefined4 **)(param_1 + 4),(undefined4 *)PTR_FUN_004ab7ac,param_2);
      }
      goto LAB_0041072e;
    }
  }
  FUN_00410104(*(int **)(param_1 + 4),param_2);
LAB_0041072e:
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0041074b;
  pcStack_14 = (code *)0x410743;
  FUN_004107b4(param_1);
  return;
}


