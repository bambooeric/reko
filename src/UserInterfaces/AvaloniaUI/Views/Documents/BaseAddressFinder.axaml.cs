using Avalonia.Controls;
using Avalonia.Interactivity;
using Avalonia.Markup.Xaml;
using System;

namespace Reko.UserInterfaces.AvaloniaUI.Views.Documents
{
    public partial class BaseAddressFinder : UserControl
    {
        public BaseAddressFinder()
        {
            InitializeComponent();
        }

        private void InitializeComponent()
        {
            AvaloniaXamlLoader.Load(this);
        }

        private void btnStartStop_Click(object sender, RoutedEventArgs e)
        {

        }

        private void btnChangeAddress_Click(object sender, RoutedEventArgs e)
        {

        }
    }
}
