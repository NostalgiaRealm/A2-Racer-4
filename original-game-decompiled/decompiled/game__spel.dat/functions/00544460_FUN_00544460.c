
/* ==== FUN_00544460 @ 00544460 ==== 
 * signature: undefined __thiscall FUN_00544460(void * this, undefined4 param_1, double * param_2, int param_3, int param_4, int param_5, void * param_6)
 * body: 00544460-005445ee
 */

void __thiscall
FUN_00544460(void *this,undefined4 param_1,double *param_2,int param_3,int param_4,int param_5,
            void *param_6)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  
  *(int *)((int)this + 0x4c) = param_4;
  *(uint *)((int)this + 0x50) = param_4 + 1U & 0xfffffffe;
  FUN_00544170(this,param_6);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)this = 0xa0000000;
  *(undefined4 *)((int)this + 4) = 0x3e7ad7f2;
  *(undefined4 *)((int)this + 8) = 0xa0000000;
  *(undefined4 *)((int)this + 0xc) = 0x3e7ad7f2;
  *(int *)((int)this + 0xd8) = param_4;
  *(double *)((int)this + 0x10) = *(double *)this * 1000.0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x40c38800;
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(double *)((int)this + 0x80) = *(double *)this * 10.0;
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0xa0);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)this;
  *(undefined4 *)((int)this + 0xe0) = param_1;
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)this;
  iVar1 = 0;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)((int)this + 4);
  if (0 < *(int *)((int)this + 0x50)) {
    pdVar2 = param_2;
    do {
      pdVar3 = pdVar2 + 1;
      *(int *)(*(int *)((int)this + 0x44) + iVar1 * 4) = iVar1;
      *(int *)(*(int *)((int)this + 0x48) + iVar1 * 4) = iVar1;
      *(undefined4 *)((param_3 - (int)param_2) + -8 + (int)pdVar3) = 0;
      *(undefined4 *)((param_3 - (int)param_2) + -4 + (int)pdVar3) = 0;
      *(double *)(*(int *)((int)this + 0x34) + iVar1 * 8) = -*pdVar2;
      iVar1 = iVar1 + 1;
      pdVar2 = pdVar3;
    } while (iVar1 < *(int *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(double **)((int)this + 0x24) = param_2;
  *(int *)((int)this + 0x2c) = param_3;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  FUN_00545110(this,param_5);
  FUN_00544830(this);
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  return;
}


