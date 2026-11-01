
/* ==== FUN_004d1560 @ 004d1560 ==== 
 * signature: undefined4 * __thiscall FUN_004d1560(void * this, undefined4 param_1, undefined1 param_2, undefined4 * param_3, uint param_4, undefined4 param_5)
 * body: 004d1560-004d169a
 */

/* WARNING: Removing unreachable block (ram,0x004d15a8) */

undefined4 * __thiscall
FUN_004d1560(void *this,undefined4 param_1,undefined1 param_2,undefined4 *param_3,uint param_4,
            undefined4 param_5)

{
  undefined1 *this_00;
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar2 = param_4;
  puVar6 = param_3;
  pcStack_8 = FUN_0056fad8;
  local_c = ExceptionList;
  this_00 = (undefined1 *)((int)this + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  *this_00 = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if (this_00 == &param_2) {
    FUN_0040f800(this_00,param_4,0xffffffff);
    FUN_0040f800(this_00,0,0);
    puVar6 = param_3;
  }
  else {
    if (param_4 != 0) {
      puVar3 = (undefined4 *)&DAT_0057629c;
      if (param_3 != (undefined4 *)0x0) {
        puVar3 = param_3;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004028f0(this_00,'\x01');
        puVar3 = (undefined4 *)&DAT_0057629c;
        if (puVar6 != (undefined4 *)0x0) {
          puVar3 = puVar6;
        }
        *(undefined4 **)((int)this + 8) = puVar3;
        *(uint *)((int)this + 0xc) = param_4;
        *(undefined4 *)((int)this + 0x10) = param_5;
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_004d1657;
      }
    }
    uVar4 = FUN_00402a00(this_00,param_4,'\x01');
    if ((char)uVar4 != '\0') {
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar3 = *(undefined4 **)((int)this + 8);
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      FUN_004029e0(this_00,uVar2);
      puVar6 = param_3;
    }
  }
LAB_004d1657:
  *(undefined ***)this = &PTR_FUN_005777cc;
  *(undefined4 *)((int)this + 0x14) = param_1;
  if (puVar6 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puVar6 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)((int)puVar6 + -1));
    }
    else {
      *(char *)((int)puVar6 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


