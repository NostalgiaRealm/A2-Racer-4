
/* ==== FUN_004a74a0 @ 004a74a0 ==== 
 * signature: undefined __thiscall FUN_004a74a0(void * this, undefined4 param_1)
 * body: 004a74a0-004a74ec
 */

void __thiscall FUN_004a74a0(void *this,undefined4 param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + *(int *)((int)this + 800) * 4) = param_1;
  iVar1 = *(int *)((int)this + 800) + 1;
  *(int *)((int)this + 800) = iVar1;
  if (199 < iVar1) {
    FUN_004c3fa0((byte *)s__s___d__num_alphaobjects_>_max___005afac0);
    *(undefined4 *)((int)this + 800) = 199;
  }
  return;
}


