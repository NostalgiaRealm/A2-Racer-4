
/* ==== FUN_00425490 @ 00425490 ==== 
 * signature: undefined __thiscall FUN_00425490(void * this, int param_1)
 * body: 00425490-004256bd
 */

void __thiscall FUN_00425490(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float local_4c [19];
  
  local_4c[0] = 0.0;
  local_4c[1] = 0.0;
  local_4c[2] = 0.0;
  iVar1 = FUN_004a7790(*(undefined4 *)((int)this + param_1 * 0x48 + 0x14),
                       *(undefined4 *)((int)this + param_1 * 0x48 + 0x18),
                       *(undefined4 *)((int)this + param_1 * 0x48 + 0x1c),0,0,0,
                       *(undefined4 *)((int)this + param_1 * 0x48 + 8),0,FUN_004253b0,0,0);
  *(int *)((int)this + param_1 * 0x48 + 0x10) = iVar1;
  if (0x44c < *(int *)((int)this + param_1 * 0x48 + 0x38)) {
    *(undefined4 *)((int)this + param_1 * 0x48 + 0x44) = 2;
  }
  iVar3 = *(int *)((int)this + 0xe18);
  for (iVar4 = *(int *)(*(int *)((int)this + 0xe18) * 0xf0 + 0x44 + DAT_00715e50); iVar4 != -1;
      iVar4 = *(int *)(iVar4 * 0xf0 + 0x44 + DAT_00715e50)) {
    iVar3 = iVar4;
  }
  *(int *)(iVar3 * 0xf0 + 0x44 + DAT_00715e50) = iVar1;
  local_4c[0] = 0.0;
  local_4c[1] = 0.0;
  local_4c[2] = 0.0;
  iVar3 = iVar1 * 0xf0;
  *(undefined4 *)(iVar3 + 0x48 + DAT_00715e50) = *(undefined4 *)((int)this + 0xe18);
  *(undefined4 *)(iVar3 + 0x34 + DAT_00715e50) =
       *(undefined4 *)(*(int *)((int)this + 0xe18) * 0xf0 + 0x34 + DAT_00715e50);
  *(undefined4 *)(iVar3 + 0x68 + DAT_00715e50) = 1;
  puVar2 = (undefined4 *)(iVar3 + 0xbc + DAT_00715e50);
  FUN_004a79d0(iVar1,*puVar2,puVar2[1],puVar2[2],0,0,0,5.0,0.7,0.2,'\0',0,'\0',1);
  FUN_004a7190(iVar1);
  iVar4 = DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1e20(*(void **)(iVar3 + 0x10 + DAT_00715e50),local_4c + 3);
  puVar5 = (undefined4 *)(iVar4 + 0x10);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar1 = DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1dd0(*(void **)(iVar3 + 0x10 + DAT_00715e50),local_4c);
  *(undefined4 *)(iVar1 + 0x50) = *puVar2;
  *(undefined4 *)(iVar1 + 0x54) = puVar2[1];
  *(undefined4 *)(iVar1 + 0x58) = puVar2[2];
  FUN_004f21f0(*(void **)(*(int *)(iVar3 + 0x10 + DAT_00715e50) + 8),0);
  *(uint *)(iVar3 + 0x1c + DAT_00715e50) = *(uint *)(iVar3 + 0x1c + DAT_00715e50) | 2;
  return;
}


