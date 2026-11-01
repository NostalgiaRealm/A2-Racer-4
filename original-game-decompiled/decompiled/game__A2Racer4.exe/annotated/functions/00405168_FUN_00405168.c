
/* ==== FUN_00405168 @ 00405168 ==== 
 * signature: char * __cdecl FUN_00405168(int param_1, uint * param_2, undefined4 * param_3, char * param_4)
 * body: 00405168-004052b0
 */

char * __cdecl FUN_00405168(int param_1,uint *param_2,undefined4 *param_3,char *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  size_t sVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  undefined **ppuVar7;
  char *local_c;
  
  pbVar1 = (byte *)FUN_004053b9((byte *)param_2,0x5c);
  pbVar2 = (byte *)FUN_004053b9((byte *)param_2,0x2f);
  puVar4 = param_2;
  if (pbVar2 == (byte *)0x0) {
    if ((pbVar1 != (byte *)0x0) ||
       (pbVar1 = FUN_00405346((byte *)param_2,0x3a), pbVar1 != (byte *)0x0)) goto LAB_004051dd;
    sVar3 = _strlen((char *)param_2);
    puVar4 = _malloc(sVar3 + 3);
    if (puVar4 != (uint *)0x0) {
      FUN_00403690(puVar4,(uint *)&DAT_00406514);
      FUN_004036a0(puVar4,param_2);
      pbVar1 = (byte *)((int)puVar4 + 2);
      goto LAB_004051dd;
    }
LAB_00405236:
    local_c = (char *)0xffffffff;
  }
  else {
    if ((pbVar1 == (byte *)0x0) || (pbVar1 < pbVar2)) {
      pbVar1 = pbVar2;
    }
LAB_004051dd:
    local_c = (char *)0xffffffff;
    iVar5 = FUN_004053b9(pbVar1,0x2e);
    if (iVar5 == 0) {
      sVar3 = _strlen((char *)puVar4);
      puVar6 = _malloc(sVar3 + 5);
      if (puVar6 == (uint *)0x0) goto LAB_00405236;
      FUN_00403690(puVar6,puVar4);
      sVar3 = _strlen((char *)puVar4);
      ppuVar7 = &PTR_DAT_00407a9c;
      do {
        FUN_00403690((uint *)(sVar3 + (int)puVar6),(uint *)*ppuVar7);
        iVar5 = FUN_00405302((LPCSTR)puVar6,0);
        if (iVar5 != -1) {
          local_c = FUN_004052b1(param_1,(LPCSTR)puVar6,param_3,param_4);
          break;
        }
        ppuVar7 = ppuVar7 + -1;
      } while (0x407a8f < (int)ppuVar7);
      FUN_00403657(puVar6);
    }
    else {
      iVar5 = FUN_00405302((LPCSTR)puVar4,0);
      if (iVar5 != -1) {
        local_c = FUN_004052b1(param_1,(LPCSTR)puVar4,param_3,param_4);
      }
    }
    if (puVar4 != param_2) {
      FUN_00403657(puVar4);
    }
  }
  return local_c;
}


