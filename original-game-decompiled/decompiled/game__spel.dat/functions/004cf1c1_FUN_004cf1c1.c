
/* ==== FUN_004cf1c1 @ 004cf1c1 ==== 
 * signature: int __stdcall FUN_004cf1c1(void)
 * body: 004cf1c1-004cf312
 */

/* WARNING: Removing unreachable block (ram,0x004cf1fd) */

int FUN_004cf1c1(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_EBX;
  undefined4 *puVar7;
  undefined4 *unaff_EDI;
  int in_stack_00000010;
  void *in_stack_00000014;
  undefined4 *puStack00000024;
  
  this = operator_new(0x10);
  if (this == unaff_EDI) {
    this = (undefined4 *)0x0;
  }
  else {
    puVar7 = *(undefined4 **)(unaff_EBX + 0x10);
    uVar1 = *(undefined1 *)puVar7;
    this[1] = unaff_EDI;
    *(undefined1 *)this = uVar1;
    this[2] = unaff_EDI;
    this[3] = unaff_EDI;
    puVar5 = (undefined4 *)puVar7[2];
    puStack00000024 = this;
    if (this == puVar7) {
      if (unaff_EDI < puVar5) {
        FUN_0054b29c();
      }
      FUN_00402c30(this);
      puVar3 = (undefined4 *)(this[2] - (int)puVar5);
      puVar7 = (undefined4 *)0xffffffff;
      if (puVar3 != (undefined4 *)0xffffffff) {
        puVar7 = puVar3;
      }
      if (unaff_EDI < puVar7) {
        FUN_005580e0((undefined4 *)((int)puVar5 + this[1]),
                     (undefined4 *)((int)puVar5 + this[1] + (int)puVar7),(int)puVar3 - (int)puVar7);
        iVar2 = this[2];
        uVar4 = FUN_00402a00(this,iVar2 - (int)puVar7,(char)unaff_EDI);
        if ((char)uVar4 != '\0') {
          FUN_004029e0(this,iVar2 - (int)puVar7);
        }
      }
      FUN_0040f800(this,(uint)unaff_EDI,(uint)unaff_EDI);
      *(undefined4 **)(in_stack_00000010 + 0x10) = this;
      ExceptionList = in_stack_00000014;
      return in_stack_00000010;
    }
    if (unaff_EDI < puVar5) {
      puVar3 = (undefined4 *)puVar7[1];
      if (puVar3 == unaff_EDI) {
        puVar3 = (undefined4 *)&DAT_0057629c;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004028f0(this,'\x01');
        puVar5 = (undefined4 *)puVar7[1];
        if (puVar5 == unaff_EDI) {
          puVar5 = (undefined4 *)&DAT_0057629c;
        }
        this[1] = puVar5;
        this[2] = puVar7[2];
        this[3] = puVar7[3];
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        *(undefined4 **)(in_stack_00000010 + 0x10) = this;
        ExceptionList = in_stack_00000014;
        return in_stack_00000010;
      }
    }
    uVar4 = FUN_00402a00(this,(uint)puVar5,'\x01');
    if ((char)uVar4 != '\0') {
      puVar7 = (undefined4 *)puVar7[1];
      if (puVar7 == unaff_EDI) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar3 = (undefined4 *)this[1];
      for (uVar6 = (uint)puVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar6 = (uint)puVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      this[2] = puVar5;
      *(undefined1 *)(this[1] + (int)puVar5) = 0;
      *(undefined4 **)(in_stack_00000010 + 0x10) = this;
      ExceptionList = in_stack_00000014;
      return in_stack_00000010;
    }
  }
  *(undefined4 **)(in_stack_00000010 + 0x10) = this;
  ExceptionList = in_stack_00000014;
  return in_stack_00000010;
}


