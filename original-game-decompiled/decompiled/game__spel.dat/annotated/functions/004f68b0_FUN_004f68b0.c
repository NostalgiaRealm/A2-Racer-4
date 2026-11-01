
/* ==== FUN_004f68b0 @ 004f68b0 ==== 
 * signature: undefined __thiscall FUN_004f68b0(void * this, int param_1)
 * body: 004f68b0-004f6942
 */

void __thiscall FUN_004f68b0(void *this,int param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
  pvVar2 = (LPVOID)FUN_004f70e0(*(void **)((int)this + 8),param_1);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_004f7070(*(void **)((int)this + 8),param_1);
    FUN_004f65e0((int)pvVar2);
    FUN_0054b339(pvVar2);
  }
  pvVar2 = (LPVOID)FUN_004f71e0(*(void **)((int)this + 0xc),param_1);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_004f7170(*(void **)((int)this + 0xc),param_1);
    FUN_004f65e0((int)pvVar2);
    FUN_0054b339(pvVar2);
  }
  if (param_1 == *(int *)((int)this + 0x10)) {
    iVar3 = FUN_004f6450(this,*(int *)((int)this + 0x10));
    *(int *)((int)this + 0x10) = iVar3;
    if (param_1 == iVar3) {
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  piVar1 = *(int **)(*(int *)((int)this + 4) + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(param_1);
  }
  return;
}


