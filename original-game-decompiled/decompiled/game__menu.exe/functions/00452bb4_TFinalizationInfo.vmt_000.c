
/* ==== TFinalizationInfo.vmt_000 @ 00452bb4 ==== 
 * signature: undefined __register TFinalizationInfo.vmt_000(int param_1)
 * body: 00452bb4-00452bc5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TFinalizationInfo_vmt_000(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    (**(code **)(param_1 + 0xc))();
  }
  return;
}


