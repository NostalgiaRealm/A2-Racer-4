
/* ==== FUN_005105b0 @ 005105b0 ==== 
 * signature: undefined __thiscall FUN_005105b0(void * this, void * param_1)
 * body: 005105b0-00510686
 */

void __thiscall FUN_005105b0(void *this,void *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 *puVar5;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  puVar1 = (uint *)(*(uint *)((int)this + 0x2c) & 0xfffffff0);
  iVar2 = (*puVar1 & 0xfff) + 1;
  puVar3 = (uint *)(*(uint *)((int)this + 0x48) & 0xfffffff0);
  iVar4 = (*puVar3 & 0xfff) + 1;
  if ((puVar1[iVar2 * -4 + 2] & 3) != 0) {
    if ((puVar3[iVar4 * -4 + 2] & 3) == 0) {
      *(undefined4 *)((int)this + 0x8c) = 0;
      goto LAB_00510624;
    }
    if (*(float *)((int)puVar3 + puVar3[iVar4 * -4 + 1] + 0x14 + iVar4 * -0x10) <
        *(float *)((int)puVar1 + puVar1[iVar2 * -4 + 1] + 0x14 + iVar2 * -0x10)) {
      *(undefined4 *)((int)this + 0x8c) = 0;
      goto LAB_00510624;
    }
  }
  *(undefined4 *)((int)this + 0x8c) = 1;
LAB_00510624:
  FUN_0053b570(param_1,(int)this);
  puVar5 = local_8;
  (**(code **)**(undefined4 **)(*(int *)(*(int *)((int)this + 0x28) + 0x18) + 0x1c))
            (*(int *)((int)this + 0x28),*(undefined4 *)((int)this + 0x44),local_10);
  FUN_0053b8a0((int)this,
               (float)((float10)(double)CONCAT44(unaff_EDI,puVar5) +
                      (float10)(double)CONCAT44(unaff_EBX,unaff_ESI)));
  *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) & 0xffd3ffff | 0x100000;
  FUN_005108c0((int)this);
  return;
}


