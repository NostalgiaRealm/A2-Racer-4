
/* ==== FUN_0047f840 @ 0047f840 ==== 
 * signature: undefined __register FUN_0047f840(int * param_1, undefined4 param_2)
 * body: 0047f840-0047f968;0047f99f-0047f9fd
 */

void FUN_0047f840(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *in_FS_OFFSET;
  int iStackY_15c;
  code *pcStackY_158;
  undefined1 *puStackY_154;
  char *pcVar6;
  int iStack_13c;
  code *pcStack_138;
  undefined1 *puStack_134;
  undefined4 *local_124;
  undefined4 local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_124 = (undefined4 *)0x0;
  local_120 = 0;
  local_11c = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_8 = (undefined4 *)0x0;
  pcStack_138 = thunk_FUN_004036bc;
  iStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_13c;
  local_c = 0;
  local_10 = param_2;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  pcVar6 = "LoadPlayer";
  puStackY_154 = (undefined1 *)0x47f8bd;
  FUN_00403f9c(&local_14,3);
  puStackY_154 = (undefined1 *)local_14;
  pcStackY_158 = (code *)0x47f8c6;
  uVar2 = FUN_0045f46c();
  puVar1 = puStackY_154;
  puStackY_154 = (undefined1 *)0x47f8d2;
  FUN_0045fa3c(uVar2,(int)puVar1,2,(int)pcVar6);
  puStackY_154 = (undefined1 *)0x47f8df;
  FUN_00481178(param_2,(int *)&local_11c);
  puStackY_154 = (undefined1 *)0x47f8f3;
  FUN_00403f28((int *)&local_8,(undefined4 *)param_1[0x2e],local_11c);
  puStackY_154 = (undefined1 *)0x47f8fb;
  uVar3 = FUN_004087a4((undefined *)local_8);
  if ((char)uVar3 == '\0') {
    puStackY_154 = (undefined1 *)0x47f9b4;
    FUN_00403f28((int *)&local_124,(undefined4 *)"Unable to load: ",local_8);
    puStackY_154 = (undefined1 *)0x47f9c6;
    piVar5 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',local_124);
    puStackY_154 = (undefined1 *)0x47f9cb;
    FUN_004036f4(piVar5);
  }
  else {
    if (param_1[0x30] == 0) {
      puStackY_154 = (undefined1 *)0x47f918;
      iVar4 = TSaveGame_vmt_004((int *)&PTR_TSaveGame_vmt_000_0048aa08,'\x01');
      param_1[0x30] = iVar4;
    }
    pcStackY_158 = thunk_FUN_00403408;
    iStackY_15c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStackY_15c;
    puStackY_154 = &stack0xfffffffc;
    FUN_0048af60((int *)param_1[0x30],(undefined *)local_8);
    piVar5 = (int *)(**(code **)(*(int *)param_1[0x30] + 8))();
    uVar2 = FUN_0045f46c();
    FUN_0045fd98(uVar2,0x47fa38,piVar5);
    *(undefined4 *)(param_1[0x31] + 0x14) = param_2;
    *in_FS_OFFSET = iStackY_15c;
  }
  *in_FS_OFFSET = (int)pcVar6;
  FUN_00403c80((int *)&local_124,3);
  FUN_00403c80(&local_18,2);
  FUN_00403c5c((int *)&local_8);
  return;
}


