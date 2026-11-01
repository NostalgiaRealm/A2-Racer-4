
/* ==== FUN_004f2270 @ 004f2270 ==== 
 * signature: undefined __thiscall FUN_004f2270(void * this, double * param_1)
 * body: 004f2270-004f23b7
 */

void __thiscall FUN_004f2270(void *this,double *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  double local_80 [12];
  double local_20;
  double local_18;
  double local_10;
  
  FUN_00402d00(local_80,0x20,3,FUN_0043e110);
  FUN_004faa90(local_80,param_1);
  for (puVar1 = *(undefined4 **)((int)this + 0x88); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    FUN_004fac90(local_80,(float *)(puVar1 + 3),(float *)(puVar1 + 7));
  }
  if (1.0000000000000001e-16 <= local_20 * local_20 + local_18 * local_18 + local_10 * local_10) {
    *(float *)((int)this + 0x30) = (float)local_20;
    *(float *)((int)this + 0x34) = (float)local_18;
    *(float *)((int)this + 0x38) = (float)local_10;
    *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xfffff3ff;
  }
  else {
    *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xfffff7ff | 0x400;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  if (((*param_1 == 1.0) && (param_1[5] == 1.0)) && (param_1[10] == 1.0)) {
    FUN_0054b339(*(LPVOID *)((int)this + 0x2c));
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  else {
    if (*(int *)((int)this + 0x2c) == 0) {
      pvVar2 = operator_new(0x20);
      *(void **)((int)this + 0x2c) = pvVar2;
    }
    FUN_004f8bf0(*(void **)((int)this + 0x2c),local_80);
    FUN_004f8f20(*(double **)((int)this + 0x2c));
  }
  if (*(int *)((int)this + 0x40) != 0) {
    FUN_004fe450((int)this);
  }
  return;
}


