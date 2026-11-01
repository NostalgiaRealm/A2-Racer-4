object frmDisplaySettings: TfrmDisplaySettings
  Left = 441
  Top = 114
  Width = 497
  Height = 586
  BorderIcons = [biSystemMenu]
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object btnOk: TButton
    Left = 311
    Top = 522
    Width = 76
    Height = 22
    Anchors = [akRight, akBottom]
    Caption = 'btnOk'
    ModalResult = 1
    TabOrder = 3
    OnClick = btnOkClick
  end
  object btnCancel: TButton
    Left = 400
    Top = 522
    Width = 76
    Height = 22
    Anchors = [akRight, akBottom]
    Cancel = True
    Caption = 'btnCancel'
    ModalResult = 2
    TabOrder = 0
  end
  object PageControl: TPageControl
    Left = 8
    Top = 28
    Width = 472
    Height = 477
    ActivePage = pnlGeneral
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 1
    object pnlGeneral: TTabSheet
      Caption = 'pnlGeneral'
      object lblDriver: TLabel
        Left = 21
        Top = 238
        Width = 36
        Height = 13
        Caption = 'lblDriver'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Comic Sans MS'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object lblResolution: TLabel
        Left = 21
        Top = 355
        Width = 53
        Height = 13
        Caption = 'lblResolution'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Comic Sans MS'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object lblDriverExplanation: TLabel
        Left = 21
        Top = 262
        Width = 292
        Height = 41
        AutoSize = False
        Caption = 'lblDriverExplanation'
        WordWrap = True
      end
      object lblResolutionExplanation: TLabel
        Left = 21
        Top = 377
        Width = 308
        Height = 37
        AutoSize = False
        Caption = 'lblResolutionExplanation'
        WordWrap = True
      end
      object lblBrightness: TLabel
        Left = 21
        Top = 10
        Width = 54
        Height = 13
        Caption = 'lblBrightness'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Comic Sans MS'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object lblBrightnessLight: TLabel
        Left = 42
        Top = 33
        Width = 82
        Height = 13
        Caption = 'lblBrightnessLight'
        OnClick = lblBrightnessLightClick
      end
      object lblBrightnessDark: TLabel
        Left = 42
        Top = 55
        Width = 82
        Height = 13
        Caption = 'lblBrightnessDark'
        OnClick = lblBrightnessDarkClick
      end
      object lblMipmapping: TLabel
        Left = 45
        Top = 89
        Width = 67
        Height = 13
        Caption = 'lblMipmapping'
        OnClick = lblMipmappingClick
      end
      object cboDriver: TComboBox
        Left = 21
        Top = 317
        Width = 228
        Height = 21
        Style = csDropDownList
        ItemHeight = 13
        TabOrder = 0
        OnChange = cboDriverChange
        Items.Strings = ('standaard' 'automatisch')
      end
      object cboResolution: TComboBox
        Left = 21
        Top = 422
        Width = 228
        Height = 21
        ItemHeight = 13
        TabOrder = 1
      end
      object btnBrightnessLight: TRadioButton
        Left = 21
        Top = 30
        Width = 21
        Height = 21
        TabOrder = 2
        TabStop = True
      end
      object btnBrightnessDark: TRadioButton
        Left = 21
        Top = 53
        Width = 21
        Height = 21
        TabOrder = 3
        TabStop = True
      end
      object chkMipMapping: TCheckBox
        Left = 24
        Top = 88
        Width = 17
        Height = 17
        TabOrder = 4
      end
      object grpTexture: TGroupBox
        Left = 21
        Top = 122
        Width = 177
        Height = 97
        Caption = 'grpTexture'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 5
        object optLowDetail: TRadioButton
          Left = 16
          Top = 20
          Width = 113
          Height = 17
          Caption = 'optLowDetail'
          TabOrder = 0
        end
        object optMediumDetail: TRadioButton
          Left = 16
          Top = 42
          Width = 113
          Height = 17
          Caption = 'RadioButton1'
          TabOrder = 1
        end
        object optHighDetail: TRadioButton
          Left = 16
          Top = 65
          Width = 113
          Height = 17
          Caption = 'RadioButton1'
          TabOrder = 2
        end
      end
    end
    object pnlProblems: TTabSheet
      Caption = 'pnlProblems'
      ImageIndex = 1
      object lblSolvingProblems: TLabel
        Left = 22
        Top = 24
        Width = 76
        Height = 13
        Caption = 'lblSolvingProblems'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Comic Sans MS'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object lblBilinearFiltering: TLabel
        Left = 47
        Top = 127
        Width = 78
        Height = 13
        Caption = 'lblBilinearFiltering'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Comic Sans MS'
        Font.Style = [fsBold]
        ParentFont = False
        OnClick = lblBilinearFilteringClick
      end
      object lblAlphaBlending: TLabel
        Left = 47
        Top = 235
        Width = 69
        Height = 13
        Caption = 'lblAlphaBlending'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Comic Sans MS'
        Font.Style = [fsBold]
        ParentFont = False
        OnClick = lblAlphaBlendingClick
      end
      object lblRenderToVideoMemory: TLabel
        Left = 47
        Top = 308
        Width = 108
        Height = 13
        Caption = 'lblRenderToVideoMemory'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Comic Sans MS'
        Font.Style = [fsBold]
        ParentFont = False
        OnClick = lblRenderToVideoMemoryClick
      end
      object lblWaitVbl: TLabel
        Left = 47
        Top = 395
        Width = 43
        Height = 13
        Caption = 'lblWaitVbl'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Comic Sans MS'
        Font.Style = [fsBold]
        ParentFont = False
        OnClick = lblWaitVblClick
      end
      object lblBilinearFilteringExplanation: TLabel
        Left = 22
        Top = 60
        Width = 417
        Height = 63
        AutoSize = False
        Caption = 'lblBilinearFilteringExplanation'
        WordWrap = True
      end
      object lblAlphaBlendingExplanation: TLabel
        Left = 22
        Top = 173
        Width = 403
        Height = 54
        AutoSize = False
        Caption = 'lblAlphaBlendingExplanation'
        WordWrap = True
      end
      object lblRenderToVideoMemoryExplanation: TLabel
        Left = 22
        Top = 280
        Width = 411
        Height = 24
        AutoSize = False
        Caption = 'lblRenderToVideoMemoryExplanation'
        WordWrap = True
      end
      object lblWaitVblExplanation: TLabel
        Left = 22
        Top = 364
        Width = 411
        Height = 24
        AutoSize = False
        Caption = 'lblWaitVblExplanation'
        WordWrap = True
      end
      object btnBilinearFiltering: TCheckBox
        Left = 22
        Top = 126
        Width = 21
        Height = 21
        TabOrder = 0
      end
      object btnAlphaBlending: TCheckBox
        Left = 22
        Top = 233
        Width = 21
        Height = 21
        TabOrder = 1
      end
      object btnRenderToVideoMemory: TCheckBox
        Left = 22
        Top = 306
        Width = 21
        Height = 20
        TabOrder = 2
      end
      object btnWaitVbl: TCheckBox
        Left = 22
        Top = 393
        Width = 21
        Height = 21
        TabOrder = 3
      end
    end
  end
  object btnHelpStd: TButton
    Left = 414
    Top = 14
    Width = 65
    Height = 22
    Anchors = [akTop, akRight]
    Caption = 'btnHelpStd'
    TabOrder = 2
    OnClick = btnHelpStdClick
  end
end
