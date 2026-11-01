
/* ==== FUN_0054c31a @ 0054c31a ==== 
 * signature: undefined __thiscall FUN_0054c31a(void * this, undefined4 * param_1, int param_2, DWORD param_3)
 * body: 0054c31a-0054c39b
 */

void __thiscall FUN_0054c31a(void *this,undefined4 *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [6];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int **)((int)this + 0x50) != (int *)0x0) {
    iVar1 = FUN_0055a06b(*(int **)((int)this + 0x50),param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_0055a4c8(*(char **)((int)this + 0x50),(ulonglong *)&local_c);
      if (iVar1 == 0) {
        local_24[0] = 0;
        local_24[2] = local_c;
        local_24[3] = local_8;
        local_24[4] = *(undefined4 *)((int)this + 0x40);
        goto LAB_0054c38f;
      }
    }
  }
  local_24[0] = 0xffffffff;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = DAT_00750068;
LAB_0054c38f:
  puVar2 = local_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


