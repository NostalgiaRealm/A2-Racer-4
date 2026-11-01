
/* ==== FUN_00410a30 @ 00410a30 ==== 
 * signature: void * __cdecl FUN_00410a30(void * param_1, void * param_2, void * param_3)
 * body: 00410a30-00410bcd
 */

/* WARNING: Removing unreachable block (ram,0x00410a61) */

void * __cdecl FUN_00410a30(void *param_1,void *param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  void *this;
  uint uVar8;
  undefined4 *puVar9;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar8 = *(uint *)((int)param_2 + -0x4c);
    pvVar7 = (void *)((int)param_2 + -0x54);
    this = (void *)((int)param_3 + -0x54);
    if (this == pvVar7) {
      if (*(uint *)((int)param_3 + -0x4c) < uVar8) {
        FUN_0054b29c();
      }
      FUN_00402c30(this);
      iVar1 = *(int *)((int)param_3 + -0x4c) - uVar8;
      iVar6 = -1;
      if (iVar1 != -1) {
        iVar6 = iVar1;
      }
      if (iVar6 != 0) {
        puVar4 = (undefined4 *)(*(int *)((int)param_3 + -0x50) + uVar8);
        FUN_005580e0(puVar4,(undefined4 *)((int)puVar4 + iVar6),iVar1 - iVar6);
        uVar8 = *(int *)((int)param_3 + -0x4c) - iVar6;
        uVar2 = FUN_00402a00(this,uVar8,'\0');
        if ((char)uVar2 != '\0') {
          FUN_004029e0(this,uVar8);
        }
      }
      FUN_00402c30(this);
    }
    else {
      if (uVar8 != 0) {
        puVar3 = *(undefined1 **)((int)param_2 + -0x50);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        if ((byte)puVar3[-1] < 0xfe) {
          FUN_004028f0(this,'\x01');
          puVar3 = *(undefined1 **)((int)param_2 + -0x50);
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0057629c;
          }
          *(undefined1 **)((int)param_3 + -0x50) = puVar3;
          *(undefined4 *)((int)param_3 + -0x4c) = *(undefined4 *)((int)param_2 + -0x4c);
          *(undefined4 *)((int)param_3 + -0x48) = *(undefined4 *)((int)param_2 + -0x48);
          puVar3[-1] = puVar3[-1] + '\x01';
          goto LAB_00410b4a;
        }
      }
      uVar2 = FUN_00402a00(this,uVar8,'\x01');
      if ((char)uVar2 != '\0') {
        puVar4 = *(undefined4 **)((int)param_2 + -0x50);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)&DAT_0057629c;
        }
        puVar9 = *(undefined4 **)((int)param_3 + -0x50);
        for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = uVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(uint *)((int)param_3 + -0x4c) = uVar8;
        *(undefined1 *)(*(int *)((int)param_3 + -0x50) + uVar8) = 0;
      }
    }
LAB_00410b4a:
    *(undefined4 *)((int)param_3 + -0x44) = *(undefined4 *)((int)param_2 + -0x44);
    *(undefined4 *)((int)param_3 + -0x40) = *(undefined4 *)((int)param_2 + -0x40);
    *(undefined4 *)((int)param_3 + -0x3c) = *(undefined4 *)((int)param_2 + -0x3c);
    *(undefined4 *)((int)param_3 + -0x38) = *(undefined4 *)((int)param_2 + -0x38);
    *(undefined4 *)((int)param_3 + -0x34) = *(undefined4 *)((int)param_2 + -0x34);
    *(undefined4 *)((int)param_3 + -0x30) = *(undefined4 *)((int)param_2 + -0x30);
    *(undefined4 *)((int)param_3 + -0x2c) = *(undefined4 *)((int)param_2 + -0x2c);
    *(undefined4 *)((int)param_3 + -0x28) = *(undefined4 *)((int)param_2 + -0x28);
    *(undefined4 *)((int)param_3 + -0x24) = *(undefined4 *)((int)param_2 + -0x24);
    *(undefined4 *)((int)param_3 + -0x20) = *(undefined4 *)((int)param_2 + -0x20);
    puVar4 = (undefined4 *)((int)param_3 + -0x1c);
    iVar6 = 3;
    do {
      *puVar4 = *(undefined4 *)(((int)pvVar7 - (int)this) + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *(undefined4 *)((int)param_3 + -0x10) = *(undefined4 *)((int)param_2 + -0x10);
    *(undefined1 *)((int)param_3 + -0xc) = *(undefined1 *)((int)param_2 + -0xc);
    *(undefined4 *)((int)param_3 + -8) = *(undefined4 *)((int)param_2 + -8);
    *(undefined4 *)((int)param_3 + -4) = *(undefined4 *)((int)param_2 + -4);
    param_2 = pvVar7;
    param_3 = this;
    if (pvVar7 == param_1) {
      return this;
    }
  } while( true );
}


