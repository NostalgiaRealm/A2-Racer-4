
/* ==== FUN_004d06d0 @ 004d06d0 ==== 
 * signature: undefined __thiscall FUN_004d06d0(void * this, int * param_1, int param_2, DWORD param_3)
 * body: 004d06d0-004d077b
 */

void __thiscall FUN_004d06d0(void *this,int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18 [6];
  
  if (*(int **)((int)this + 0x50) != (int *)0x0) {
    iVar1 = FUN_0055a06b(*(int **)((int)this + 0x50),param_2,param_3);
    if (iVar1 == 0) {
      local_18[0] = FUN_0055a4c8(*(char **)((int)this + 0x50),(ulonglong *)&local_20);
      if (local_18[0] == 0) {
        local_18[3] = local_1c;
        local_18[4] = *(undefined4 *)((int)this + 0x40);
        local_18[2] = local_20;
        piVar2 = local_18;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *param_1 = *piVar2;
          piVar2 = piVar2 + 1;
          param_1 = param_1 + 1;
        }
        return;
      }
    }
  }
  local_18[3] = 0;
  local_18[4] = DAT_00750068;
  local_18[0] = -1;
  local_18[2] = 0;
  piVar2 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *piVar2;
    piVar2 = piVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


