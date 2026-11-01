
/* ==== FUN_0040b3cc @ 0040b3cc ==== 
 * signature: undefined __register FUN_0040b3cc(int * param_1, LPCVOID param_2, byte * param_3, byte * param_4)
 * body: 0040b3cc-0040b54a
 */

void FUN_0040b3cc(int *param_1,LPCVOID param_2,byte *param_3,byte *param_4)

{
  DWORD DVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  HINSTANCE hInstance;
  undefined *puVar5;
  UINT uID;
  byte *lpBuffer;
  byte local_45c [256];
  byte *local_35c;
  undefined1 local_358;
  char *local_354;
  undefined1 local_350;
  int local_34c;
  undefined1 local_348;
  char *local_344;
  undefined1 local_340;
  undefined *local_33c;
  undefined1 local_338;
  _MEMORY_BASIC_INFORMATION local_334;
  byte local_316 [256];
  byte local_216 [261];
  char local_111 [261];
  int local_c;
  byte *local_8;
  
  local_8 = param_3;
  VirtualQuery(param_2,&local_334,0x1c);
  if (local_334.State == 0x1000) {
    DVar1 = GetModuleFileNameA(local_334.AllocationBase,(LPSTR)local_216,0x105);
    if (DVar1 != 0) {
      local_c = (int)param_2 - (int)local_334.AllocationBase;
      goto LAB_0040b442;
    }
  }
  GetModuleFileNameA(DAT_004ac4dc,(LPSTR)local_216,0x105);
  local_c = FUN_0040b3c0((int)param_2);
LAB_0040b442:
  pcVar2 = FUN_0040c23c(local_216,'\\');
  FUN_00408bb4(local_111,pcVar2 + 1,0x104);
  pcVar2 = "";
  puVar5 = &DAT_0040b54c;
  uVar3 = FUN_00403114(param_1,(int)&DAT_00407624);
  if ((char)uVar3 != '\0') {
    pcVar2 = FUN_004040a0((undefined *)param_1[1]);
    iVar4 = FUN_00408b24(pcVar2);
    if ((iVar4 != 0) && (pcVar2[iVar4 + -1] != '.')) {
      puVar5 = &DAT_0040b550;
    }
  }
  iVar4 = 0x100;
  lpBuffer = local_316;
  uID = *(UINT *)(PTR_PTR_004ab9e8 + 4);
  hInstance = (HINSTANCE)FUN_004052c0((int)DAT_004ac4dc);
  LoadStringA(hInstance,uID,(LPSTR)lpBuffer,iVar4);
  FUN_00402ee4(*param_1,local_45c);
  local_35c = local_45c;
  local_358 = 4;
  local_354 = local_111;
  local_350 = 6;
  local_34c = local_c;
  local_348 = 5;
  local_340 = 6;
  local_338 = 6;
  local_344 = pcVar2;
  local_33c = puVar5;
  FUN_00409220(local_8,param_4,local_316,4,&local_35c);
  FUN_00408b24((char *)local_8);
  return;
}


