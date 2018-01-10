object Form1: TForm1
  Left = 206
  Top = 46
  Width = 921
  Height = 656
  Caption = 'Wyscig'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = -8
    Top = -16
    Width = 841
    Height = 297
    TabOrder = 0
    object Shape1: TShape
      Left = 80
      Top = 24
      Width = 17
      Height = 241
      Brush.Color = clYellow
    end
    object Shape2: TShape
      Left = 656
      Top = 24
      Width = 17
      Height = 241
      Brush.Color = clYellow
    end
  end
  object Button1: TButton
    Left = 24
    Top = 296
    Width = 75
    Height = 25
    Caption = 'Start'
    TabOrder = 1
    OnClick = Button1Click
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 336
    Width = 177
    Height = 81
    Caption = 'Ilosc zawodnikow'
    TabOrder = 2
    object TrackBar1: TTrackBar
      Left = 8
      Top = 24
      Width = 150
      Height = 45
      Min = 2
      Orientation = trHorizontal
      Frequency = 1
      Position = 10
      SelEnd = 0
      SelStart = 0
      TabOrder = 0
      TickMarks = tmBottomRight
      TickStyle = tsAuto
      OnChange = TrackBar1Change
    end
  end
  object GroupBox2: TGroupBox
    Left = 248
    Top = 296
    Width = 185
    Height = 297
    Caption = 'Zawodnicy'
    TabOrder = 3
    object Edit1: TEdit
      Left = 16
      Top = 24
      Width = 121
      Height = 21
      TabOrder = 0
      OnChange = Edit1Change
    end
    object Edit2: TEdit
      Tag = 1
      Left = 16
      Top = 48
      Width = 121
      Height = 21
      TabOrder = 1
      OnChange = Edit1Change
    end
    object Edit3: TEdit
      Tag = 2
      Left = 16
      Top = 72
      Width = 121
      Height = 21
      TabOrder = 2
      OnChange = Edit1Change
    end
    object Edit4: TEdit
      Tag = 3
      Left = 16
      Top = 96
      Width = 121
      Height = 21
      TabOrder = 3
      OnChange = Edit1Change
    end
    object Edit5: TEdit
      Tag = 4
      Left = 16
      Top = 120
      Width = 121
      Height = 21
      TabOrder = 4
      OnChange = Edit1Change
    end
    object Edit6: TEdit
      Tag = 5
      Left = 16
      Top = 144
      Width = 121
      Height = 21
      TabOrder = 5
      OnChange = Edit1Change
    end
    object Edit7: TEdit
      Tag = 6
      Left = 16
      Top = 168
      Width = 121
      Height = 21
      TabOrder = 6
      OnChange = Edit1Change
    end
    object Edit8: TEdit
      Tag = 7
      Left = 16
      Top = 192
      Width = 121
      Height = 21
      TabOrder = 7
      OnChange = Edit1Change
    end
    object Edit9: TEdit
      Tag = 8
      Left = 16
      Top = 216
      Width = 121
      Height = 21
      TabOrder = 8
      OnChange = Edit1Change
    end
    object Edit10: TEdit
      Tag = 9
      Left = 16
      Top = 240
      Width = 121
      Height = 21
      TabOrder = 9
      OnChange = Edit1Change
    end
  end
  object GroupBox3: TGroupBox
    Left = 520
    Top = 296
    Width = 201
    Height = 297
    Caption = 'Wyniki'
    TabOrder = 4
    object Wyniki: TMemo
      Left = 8
      Top = 16
      Width = 185
      Height = 273
      Lines.Strings = (
        'Wyniki')
      ReadOnly = True
      TabOrder = 0
    end
  end
  object Wyn: TButton
    Left = 736
    Top = 544
    Width = 89
    Height = 25
    Caption = 'Okno z wynikami'
    TabOrder = 5
    OnClick = WynClick
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 10
    OnTimer = Timer1Timer
    Left = 784
    Top = 80
  end
end
