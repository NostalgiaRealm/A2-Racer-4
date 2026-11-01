
/* ==== __break @ 00510aef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00510aef-00510aef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


