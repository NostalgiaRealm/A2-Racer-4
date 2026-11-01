
/* ==== FUN_00563788 @ 00563788 ==== 
 * signature: bool __cdecl FUN_00563788(int * param_1)
 * body: 00563788-00563933
 */

bool __cdecl FUN_00563788(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_005c8c5c != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_005c8cf0) || (uVar5 != DAT_005c8d00)) {
      if (DAT_0074de90 == 0) {
        FUN_00563934(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_00563934(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_0074df30 != 0) {
          uVar6 = (uint)DAT_0074df36;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_0074df34;
          uVar6 = 0;
          uVar4 = (uint)DAT_0074df36;
        }
        FUN_00563934(1,(uint)(DAT_0074df30 == 0),uVar5,(uint)DAT_0074df32,uVar4,uVar3,uVar6,
                     (uint)DAT_0074df38,(uint)DAT_0074df3a,(uint)DAT_0074df3c,(uint)DAT_0074df3e);
        if (DAT_0074dedc != 0) {
          uVar6 = (uint)DAT_0074dee2;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_0074dee0;
          uVar6 = 0;
          uVar4 = (uint)DAT_0074dee2;
          uVar5 = param_1[5];
        }
        FUN_00563934(0,(uint)(DAT_0074dedc == 0),uVar5,(uint)DAT_0074dede,uVar4,uVar3,uVar6,
                     (uint)DAT_0074dee4,(uint)DAT_0074dee6,(uint)DAT_0074dee8,(uint)DAT_0074deea);
      }
    }
    iVar1 = param_1[7];
    if (DAT_005c8cf4 < DAT_005c8d04) {
      if ((DAT_005c8cf4 <= iVar1) && (iVar1 <= DAT_005c8d04)) {
        if ((DAT_005c8cf4 < iVar1) && (iVar1 < DAT_005c8d04)) {
          return true;
        }
LAB_00563900:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_005c8cf4) {
          return DAT_005c8cf8 <= iVar2;
        }
        return iVar2 < DAT_005c8d08;
      }
    }
    else {
      if (iVar1 < DAT_005c8d04) {
        return true;
      }
      if (DAT_005c8cf4 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_005c8d04) || (DAT_005c8cf4 <= iVar1)) goto LAB_00563900;
    }
  }
  return false;
}


