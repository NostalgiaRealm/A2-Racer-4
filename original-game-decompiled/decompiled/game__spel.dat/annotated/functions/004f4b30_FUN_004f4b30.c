
/* ==== FUN_004f4b30 @ 004f4b30 ==== 
 * signature: undefined __thiscall FUN_004f4b30(void * this, double * param_1)
 * body: 004f4b30-004f4baa
 */

void __thiscall FUN_004f4b30(void *this,double *param_1)

{
  double *this_00;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  this_00 = (double *)((int)this + 0x128);
  FUN_004fa460(this_00,param_1,this_00);
  *(undefined8 *)((int)this + 0xb8) = *(undefined8 *)((int)this + 0x188);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)((int)this + 0x198);
  *(undefined8 *)((int)this + 0xc0) = *(undefined8 *)((int)this + 400);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)((int)this + 0x19c);
  FUN_004f8bf0((undefined4 *)((int)this + 0xe8),this_00);
  puVar2 = (undefined4 *)((int)this + 0xe8);
  puVar3 = (undefined4 *)((int)this + 0x108);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


