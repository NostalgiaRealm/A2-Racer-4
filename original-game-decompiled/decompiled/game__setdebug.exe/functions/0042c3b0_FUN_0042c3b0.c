
/* ==== FUN_0042c3b0 @ 0042c3b0 ==== 
 * signature: undefined __register FUN_0042c3b0(int param_1)
 * body: 0042c3b0-0042c3f6
 */

void FUN_0042c3b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (*(char *)(iVar2 + 0x10) != '\x01') {
    if (*(char *)(iVar2 + 0x10) == '\x02') {
      FUN_0042c464(param_1,'\x02');
    }
    else {
      piVar1 = FUN_0040a938((int *)&DAT_00406ed0,'\x01',(undefined4 *)0x0);
      FUN_0040346c(piVar1);
    }
    return;
  }
  FUN_0042c464(param_1,'\x01');
  return;
}


