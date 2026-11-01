
/* ==== TBevel.vmt_084 @ 004501ec ==== 
 * signature: undefined __register TBevel.vmt_084(int * param_1)
 * body: 004501ec-004502dd;004502f6-00450472
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBevel_vmt_084(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  piVar1 = (int *)param_1[0x48];
  local_8 = param_1;
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    if (*(char *)((int)param_1 + 0x129) == '\x06') {
      TPen_set_Style((int *)piVar1[4],2);
      TPen_set_Mode((int *)piVar1[4],CONCAT31((int3)((uint)extraout_EDX >> 8),0xe),extraout_ECX);
      TPen_set_Color((int *)piVar1[4],0xffd8ce);
      TBrush_set_Style((int *)piVar1[5],'\x01');
      iVar3 = TForm_get_ClientWidth(local_8);
      iVar4 = TForm_get_ClientHeight(local_8);
      FUN_004191b8(piVar1,0,0,iVar4,iVar3);
      return;
    }
    TPen_set_Style((int *)piVar1[4],0);
    TPen_set_Mode((int *)piVar1[4],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),4),extraout_ECX_00);
    TPen_set_Color((int *)piVar1[4],0);
    TBrush_set_Style((int *)piVar1[5],'\0');
  }
  TPen_set_Width((int *)piVar1[4],1);
  if ((char)local_8[0x4a] == '\0') {
    local_c = 0x80000010;
    local_10 = 0x80000014;
  }
  else {
    local_c = 0x80000014;
    local_10 = 0x80000010;
  }
  uVar2 = local_c;
  switch(*(undefined1 *)((int)local_8 + 0x129)) {
  case 0:
    FUN_0040f7e8(0,0,local_8[0xe] + -1,local_20,local_8[0xf] + -1);
    FUN_004500bc(local_20,extraout_EDX_01,extraout_ECX_01,(int)puVar5);
    break;
  case 1:
    local_c = local_10;
    FUN_0040f7e8(1,1,local_8[0xe] + -1,local_20,local_8[0xf] + -1);
    FUN_004500bc(local_20,extraout_EDX_02,extraout_ECX_02,(int)puVar6);
    local_10 = uVar2;
    local_c = uVar2;
    FUN_0040f7e8(0,0,local_8[0xe] + -2,local_20,local_8[0xf] + -2);
    FUN_004500bc(local_20,extraout_EDX_03,extraout_ECX_03,(int)puVar7);
    break;
  case 2:
    FUN_004501ac(local_c,0,0,0,local_8[0xe],(int)&stack0xfffffffc);
    FUN_004501ac(local_10,0,1,1,local_8[0xe],(int)&stack0xfffffffc);
    break;
  case 3:
    FUN_004501ac(local_c,0,local_8[0xf] + -2,local_8[0xf] + -2,local_8[0xe],(int)&stack0xfffffffc);
    FUN_004501ac(local_10,0,local_8[0xf] + -1,local_8[0xf] + -1,local_8[0xe],(int)&stack0xfffffffc);
    break;
  case 4:
    FUN_004501ac(local_c,0,0,local_8[0xf],0,(int)&stack0xfffffffc);
    FUN_004501ac(local_10,1,0,local_8[0xf],1,(int)&stack0xfffffffc);
    break;
  case 5:
    FUN_004501ac(local_c,local_8[0xe] + -2,0,local_8[0xf],local_8[0xe] + -2,(int)&stack0xfffffffc);
    FUN_004501ac(local_10,local_8[0xe] + -1,0,local_8[0xf],local_8[0xe] + -1,(int)&stack0xfffffffc);
  }
  return;
}


