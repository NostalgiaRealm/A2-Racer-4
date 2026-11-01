
/* ==== FUN_0049c040 @ 0049c040 ==== 
 * signature: undefined4 * __thiscall FUN_0049c040(void * this, void * param_1, void * param_2, void * param_3, void * param_4, undefined4 param_5, undefined4 * param_6, uint param_7, undefined4 param_8, uint param_9)
 * body: 0049c040-0049c1ab
 */

/* WARNING: Removing unreachable block (ram,0x0049c0b3) */

undefined4 * __thiscall
FUN_0049c040(void *this,void *param_1,void *param_2,void *param_3,void *param_4,undefined4 param_5,
            undefined4 *param_6,uint param_7,undefined4 param_8,uint param_9)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056e99b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00498ad0(this,param_1,param_2,param_3,param_4,(char)param_9);
  uVar2 = param_7;
  puVar7 = param_6;
  puVar4 = (undefined4 *)((int)this + 0x3c);
  *(undefined1 *)puVar4 = (undefined1)param_9;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)this = &PTR_FUN_00577184;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar4 == &param_5) {
    FUN_0040f800(puVar4,param_7,0xffffffff);
    FUN_0040f800(puVar4,0,0);
    puVar7 = param_6;
  }
  else {
    if (param_7 != 0) {
      puVar3 = (undefined4 *)&DAT_0057629c;
      if (param_6 != (undefined4 *)0x0) {
        puVar3 = param_6;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004028f0(puVar4,'\x01');
        puVar4 = (undefined4 *)&DAT_0057629c;
        if (puVar7 != (undefined4 *)0x0) {
          puVar4 = puVar7;
        }
        *(undefined4 **)((int)this + 0x40) = puVar4;
        *(uint *)((int)this + 0x44) = param_7;
        *(undefined4 *)((int)this + 0x48) = param_8;
        *(char *)((int)puVar4 + -1) = *(char *)((int)puVar4 + -1) + '\x01';
        goto LAB_0049c164;
      }
    }
    uVar5 = FUN_00402a00(puVar4,param_7,'\x01');
    if ((char)uVar5 != '\0') {
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar4 = *(undefined4 **)((int)this + 0x40);
      for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(uint *)((int)this + 0x44) = uVar2;
      *(undefined1 *)(*(int *)((int)this + 0x40) + uVar2) = 0;
      puVar7 = param_6;
    }
  }
LAB_0049c164:
  param_9 = param_9 & 0xffffff00;
  FUN_00499390(this,(undefined1 *)&param_9);
  if (puVar7 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puVar7 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)((int)puVar7 + -1));
    }
    else {
      *(char *)((int)puVar7 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


