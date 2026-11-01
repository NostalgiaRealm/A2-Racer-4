
/* ==== FUN_0055c701 @ 0055c701 ==== 
 * signature: int __cdecl FUN_0055c701(byte * param_1, uint param_2, byte * param_3, int * param_4, undefined * param_5)
 * body: 0055c701-0055c7af
 */

int __cdecl FUN_0055c701(byte *param_1,uint param_2,byte *param_3,int *param_4,undefined *param_5)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  puVar2 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar2 = PTR_PTR_005c8590;
  }
  param_5 = (undefined *)param_2;
  pbVar3 = param_3;
  if (param_2 != 0) {
    do {
      bVar1 = *pbVar3;
      if (bVar1 == 0) break;
      if (bVar1 == 0x25) {
        pbVar4 = pbVar3 + 1;
        bVar1 = *pbVar4;
        if (bVar1 == 0x23) {
          pbVar4 = pbVar3 + 2;
        }
        DAT_007503c8 = (uint)(bVar1 == 0x23);
        FUN_0055c7b0(*pbVar4,param_4,(byte *)&param_1,(uint *)&param_5,(int)puVar2);
      }
      else {
        if (((PTR_DAT_005c8384[(uint)bVar1 * 2 + 1] & 0x80) != 0) && ((undefined *)0x1 < param_5)) {
          *param_1 = bVar1;
          param_1 = param_1 + 1;
          pbVar3 = pbVar3 + 1;
          param_5 = param_5 + -1;
        }
        *param_1 = *pbVar3;
        param_1 = param_1 + 1;
        param_5 = param_5 + -1;
        pbVar4 = pbVar3;
      }
      pbVar3 = pbVar4 + 1;
    } while (param_5 != (undefined *)0x0);
    if (param_5 != (undefined *)0x0) {
      *param_1 = 0;
      return param_2 - (int)param_5;
    }
  }
  return 0;
}


