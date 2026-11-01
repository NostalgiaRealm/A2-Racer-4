
/* ==== FUN_004053b9 @ 004053b9 ==== 
 * signature: undefined __cdecl FUN_004053b9(byte * param_1, uint param_2)
 * body: 004053b9-00405418
 */

void __cdecl FUN_004053b9(byte *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  
  pbVar3 = (byte *)0x0;
  if (DAT_0040811c == 0) {
    _strrchr((char *)param_1,param_2);
    return;
  }
  do {
    bVar5 = *param_1;
    if ((*(byte *)((int)&DAT_00408220 + bVar5 + 1) & 4) == 0) {
      bVar6 = param_2 == bVar5;
LAB_0040540c:
      pbVar4 = param_1;
      if (bVar6) {
        pbVar3 = param_1;
      }
    }
    else {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if (bVar1 == 0) {
        bVar6 = pbVar3 == (byte *)0x0;
        param_1 = pbVar4;
        bVar5 = bVar1;
        goto LAB_0040540c;
      }
      uVar2 = CONCAT11(bVar5,bVar1);
      bVar5 = bVar1;
      if (param_2 == uVar2) {
        pbVar3 = param_1;
      }
    }
    param_1 = pbVar4 + 1;
    if (bVar5 == 0) {
      return;
    }
  } while( true );
}


