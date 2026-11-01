
/* ==== FUN_004cefac @ 004cefac ==== 
 * signature: int __stdcall FUN_004cefac(undefined4 param_1, int param_2, void * param_3)
 * body: 004cefac-004cf0f1
 */

/* WARNING: Removing unreachable block (ram,0x004cefec) */

int FUN_004cefac(undefined4 param_1,int param_2,void *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *this;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int unaff_EBX;
  int unaff_ESI;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack00000014;
  undefined1 *puStack0000001c;
  
  this = operator_new(0x10);
  uStack00000014 = 0;
  if (this == (undefined1 *)0x0) {
    this = (undefined1 *)0x0;
    param_2 = unaff_EBX;
  }
  else {
    puVar2 = *(undefined1 **)(unaff_ESI + 0x10);
    uVar1 = *puVar2;
    *(undefined4 *)(this + 4) = 0;
    *this = uVar1;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    uVar3 = *(uint *)(puVar2 + 8);
    puStack0000001c = this;
    if (this == puVar2) {
      if (uVar3 != 0) {
        FUN_0054b29c();
      }
      FUN_00402c30(this);
      iVar4 = *(int *)(this + 8) - uVar3;
      iVar8 = -1;
      if (iVar4 != -1) {
        iVar8 = iVar4;
      }
      if (iVar8 != 0) {
        FUN_005580e0((undefined4 *)(uVar3 + *(int *)(this + 4)),
                     (undefined4 *)((int)(uVar3 + *(int *)(this + 4)) + iVar8),iVar4 - iVar8);
        iVar4 = *(int *)(this + 8);
        uVar5 = FUN_00402a00(this,iVar4 - iVar8,'\0');
        if ((char)uVar5 != '\0') {
          FUN_004029e0(this,iVar4 - iVar8);
        }
      }
      FUN_00402c30(this);
    }
    else {
      if (uVar3 != 0) {
        puVar6 = *(undefined1 **)(puVar2 + 4);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0057629c;
        }
        if ((byte)puVar6[-1] < 0xfe) {
          FUN_004028f0(this,'\x01');
          puVar6 = *(undefined1 **)(puVar2 + 4);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0057629c;
          }
          *(undefined1 **)(this + 4) = puVar6;
          *(undefined4 *)(this + 8) = *(undefined4 *)(puVar2 + 8);
          *(undefined4 *)(this + 0xc) = *(undefined4 *)(puVar2 + 0xc);
          puVar6[-1] = puVar6[-1] + '\x01';
          goto LAB_004cf0d8;
        }
      }
      uVar5 = FUN_00402a00(this,uVar3,'\x01');
      if ((char)uVar5 != '\0') {
        puVar9 = *(undefined4 **)(puVar2 + 4);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)&DAT_0057629c;
        }
        puVar10 = *(undefined4 **)(this + 4);
        for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(uint *)(this + 8) = uVar3;
        *(undefined1 *)(uVar3 + *(int *)(this + 4)) = 0;
      }
    }
  }
LAB_004cf0d8:
  *(undefined1 **)(param_2 + 0x10) = this;
  ExceptionList = param_3;
  return param_2;
}


