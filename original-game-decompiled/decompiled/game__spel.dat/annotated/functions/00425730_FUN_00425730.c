
/* ==== FUN_00425730 @ 00425730 ==== 
 * signature: undefined __thiscall FUN_00425730(void * this, int param_1)
 * body: 00425730-004257fe
 */

void __thiscall FUN_00425730(void *this,int param_1)

{
  DWORD DVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float afStack_48 [18];
  
  *(undefined4 *)((int)this + param_1 * 0x48 + 0x44) = 1;
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + (param_1 * 9 + 9) * 8) = DVar1;
  iVar4 = *(int *)((int)this + param_1 * 0x48 + 0x10) * 0xf0;
  (**(code **)(**(int **)(iVar4 + 0x10 + DAT_00715e50) + 0x10))
            ((int)this + param_1 * 0x48 + 0x20,(int)this + param_1 * 0x48 + 0x2c);
  iVar5 = DAT_0073b0d0 + *(int *)(iVar4 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1e20(*(void **)(iVar4 + 0x10 + DAT_00715e50),afStack_48);
  puVar6 = (undefined4 *)(iVar5 + 0x10);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = DAT_0073b0d0 + *(int *)(iVar4 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)
           FUN_004a1dd0(*(void **)(iVar4 + 0x10 + DAT_00715e50),(float *)&stack0xffffffac);
  *(undefined4 *)(iVar3 + 0x50) = *puVar2;
  *(undefined4 *)(iVar3 + 0x54) = puVar2[1];
  *(undefined4 *)(iVar3 + 0x58) = puVar2[2];
  return;
}


