
/* ==== TComponentListNexus.vmt_010 @ 00420050 ==== 
 * signature: undefined TComponentListNexus.vmt_010(void)
 * body: 00420050-0042007d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComponentListNexus_vmt_010(int param_1,int param_2,char param_3)

{
  if ((param_3 == '\x01') && (*(short *)(param_1 + 0x2a) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1,param_2);
  }
  TComponent_vmt_010(param_1,param_2,param_3);
  return;
}


