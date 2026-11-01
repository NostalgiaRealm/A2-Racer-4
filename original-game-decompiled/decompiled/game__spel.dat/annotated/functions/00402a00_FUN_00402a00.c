
/* ==== FUN_00402a00 @ 00402a00 ==== 
 * signature: undefined4 __thiscall FUN_00402a00(void * this, uint param_1, char param_2)
 * body: 00402a00-00402b19
 */

int __thiscall FUN_00402a00(void *this,uint param_1,char param_2)

{
  char cVar1;
  uint3 uVar5;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  if (0xfffffffd < param_1) {
    FUN_0054b1b4();
  }
  puVar4 = *(undefined1 **)((int)this + 4);
  uVar5 = (uint3)((uint)puVar4 >> 8);
  if (((puVar4 == (undefined1 *)0x0) || (cVar1 = puVar4[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (param_1 == 0) {
      if (param_2 == '\0') {
        if (puVar4 != (undefined1 *)0x0) {
          *(undefined4 *)((int)this + 8) = 0;
          *puVar4 = 0;
        }
        return (uint)uVar5 << 8;
      }
      uVar2 = 0;
      if (puVar4 != (undefined1 *)0x0) {
        cVar1 = puVar4[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          puVar4[-1] = cVar1 + -1;
          *(undefined4 *)((int)this + 4) = 0;
          *(undefined4 *)((int)this + 8) = 0;
          *(undefined4 *)((int)this + 0xc) = 0;
          return (uint)uVar5 << 8;
        }
        uVar2 = FUN_0054b339(puVar4 + -1);
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      return uVar2 & 0xffffff00;
    }
    if (param_2 != '\0') {
      if ((0x1f < *(uint *)((int)this + 0xc)) || (*(uint *)((int)this + 0xc) < param_1)) {
        if (puVar4 != (undefined1 *)0x0) {
          cVar1 = puVar4[-1];
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            puVar4[-1] = cVar1 + -1;
            *(undefined4 *)((int)this + 4) = 0;
            *(undefined4 *)((int)this + 8) = 0;
            *(undefined4 *)((int)this + 0xc) = 0;
            uVar3 = FUN_00402b20(param_1);
            return CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
          FUN_0054b339(puVar4 + -1);
        }
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        uVar3 = FUN_00402b20(param_1);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_00402b12;
    }
    if (param_1 <= *(uint *)((int)this + 0xc)) goto LAB_00402b12;
  }
  else if (param_1 == 0) {
    puVar4[-1] = cVar1 + -1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)uVar5 << 8;
  }
  puVar4 = (undefined1 *)FUN_00402b20(param_1);
LAB_00402b12:
  return CONCAT31((int3)((uint)puVar4 >> 8),1);
}


